//
//  Item.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/10/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "Item.h"
cordial::Item::~Item(){
//	delete _name;
}

cordial::Item::Item(){
	_name = "";
}

cordial::Item::Item(std::string name){
	_name = name;
}

std::string cordial::Item::getName(){
	return _name;
}

void cordial::Item::setName(std::string name){
	_name = name;
}
