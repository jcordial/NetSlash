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

ObjectNode* cordial::NetSlashCore::_rootObjectNode = new ObjectNode();

void cordial::NetSlashCore::init(){
	if(!_isInit){
		_isInit = true;
		
		
		_rootObjectNode->object = new cordial::BaseObject();
		
	}
}
int cordial::NetSlashCore::run(){
	if(!_isInit){
		return NetSlash_fail_hasNotInitted;
	}
	
	_isRunning = true;
	while (_isRunning) {
		ObjectNode* current = _rootObjectNode;
		while (current!=0){
			current->object->update();
			current = current->next;
		}
		
	}
	
	return NetSlash_exit;
}

void cordial::NetSlashCore::__registerObjectInLoop(cordial::BaseObject *object){
	ObjectNode* current = _rootObjectNode, *next = current->next;
	while (next!=0){
		current = next;
		next = current->next;
	}
	next = new ObjectNode();
	next->prev = current;
	current->next = next;
	next->object = object;
	
	
}

NetSlashStatus cordial::NetSlashCore::getStatus(){
	return _status;
}

