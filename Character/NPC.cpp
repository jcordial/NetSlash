//
//  NPC.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/10/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "NPC.h"


cordial::NPC::NPC(){
	_inventory = std::list<Item>();
}

void cordial::NPC::addItemToInventory(Item item){
	_inventory.push_back(item);
}

InventoryList cordial::NPC::getInventory(){
	return _inventory;
}

cordial::NPC::~NPC(){
	_inventory.clear();
}