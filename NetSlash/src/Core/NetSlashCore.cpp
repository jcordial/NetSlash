//
//  NetSlashCore.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/18/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "NetSlashCore.h"
bool cordial::NetSlashCore::_isRunning = false;
bool cordial::NetSlashCore::_shouldExit	= false;
bool cordial::NetSlashCore::_isInit = false;

NetSlashStatus cordial::NetSlashCore::_status = NetSlash_hasNotInitted;

ObjectNode* cordial::NetSlashCore::rootObjectNode = new ObjectNode();

cordial::NetSlashCore::NetSlashCore(){
    
}

void cordial::NetSlashCore::init(){
    if(!_isInit){
        _isInit = true;
        
        rootObjectNode->object = new cordial::BaseObject();
        
    }
}
int cordial::NetSlashCore::run(){
    if(!_isInit){
        return NetSlash_fail_hasNotInitted;
    }
    
    _isRunning = true;
    while (_isRunning) {
        ObjectNode* current = cordial::NetSlashCore::rootObjectNode;
        while (current!=0){
            current->object->update();
            current = current->next;
        }
    }
    
    return NetSlash_exit;
}

void cordial::NetSlashCore::registerObjectInLoop(cordial::BaseObject *object){
    ObjectNode *current = cordial::NetSlashCore::rootObjectNode, *last = current->next, *next;
    while (last!=0){
        current = last;
        last = last->next;
    }
    
    next = new ObjectNode();
    next->prev = last;
    next->object = object;
    next->next = 0;
}

NetSlashStatus cordial::NetSlashCore::getStatus(){
    return _status;
}

