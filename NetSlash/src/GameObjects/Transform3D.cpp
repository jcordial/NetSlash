//
//  Transform3D.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/22/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "Transform3D.h"

cordial::Transform3D::Transform3D():cordial::BaseComponent(){
	 
}

cordial::Transform3D::~Transform3D(){
	
}

Vector3 cordial::Transform3D::getTranslation(){
	return _translation;
}
Vector3 cordial::Transform3D::getScale(){
	return _scale;
}
Vector3 cordial::Transform3D::getEulerRotation(){
	return _eulerRotation;
}

cordial::BaseObject* baseObject();

//itartion methods
void cordial::Transform3D::update(){
	this->BaseComponent::update();
};