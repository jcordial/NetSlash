//
//  GameObject.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/17/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "GameObject.h"
#include "NetSlashCore.h"
using namespace cordial;

cordial::GameObject::GameObject():cordial::BaseObject(){
	firstComponent = 0;
	
	//register ourselves with the engine core
	cordial::NetSlashCore::__registerObjectInLoop(this);
}

cordial::GameObject::~GameObject(){
	delete firstComponent;
}

void cordial::GameObject::update(){
	cordial::BaseObject::update();
	std::cout << "Game Object update";
}
/*//
//COMPONENT LOOP
//*/
