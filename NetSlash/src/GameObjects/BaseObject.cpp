//
//  BaseObject.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/21/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "BaseObject.h"
#include "BaseComponent.h"
cordial::BaseObject::BaseObject(){
	firstComponent = new COMPONENTS_LINKAGE();
	firstComponent->component = new cordial::BaseComponent();
}

cordial::BaseObject::~BaseObject(){
	delete firstComponent;
}

void cordial::BaseObject::update(){
	
}

void cordial::BaseObject::addComponent(cordial::BaseComponent *component){
	COMPONENTS_LINKAGE* current = firstComponent, *next = new COMPONENTS_LINKAGE();
	while (current->next!=0) {
		current = current->next;
	}
	current->next = next;
	next->prev = current;
	
}