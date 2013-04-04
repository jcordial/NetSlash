//
//  BaseComponent.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/17/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "BaseComponent.h"


cordial::BaseComponent::BaseComponent(){
	
}
cordial::BaseComponent::~BaseComponent(){
	
}

//itartion methods
void cordial::BaseComponent::update(){
	std::cout << "Hello update loop";
}