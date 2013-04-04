//
//  GameObject2D.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/22/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "GameObject2D.h"

cordial::GameObject2D::GameObject2D():cordial::GameObject(){
	transform = new Transform3D();
	this->addComponent(transform);
}

cordial::GameObject2D::~GameObject2D(){
	delete transform;
}

void cordial::GameObject2D::update(){
	
}
