//
//  NPC.h
//  NetSlash
//
//  Created by Jason Cordial on 10/10/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__NPC__
#define __NetSlash__NPC__

#define InventoryList std::list<cordial::Item>

#include <iostream>
#include <list>
#include "PhysicalObject.h"
#include "Item.h"
namespace cordial {
	class NPC : public cordial::PhysicalObject {
		InventoryList _inventory;
		
	public:
		////constructor overloads
		NPC();
		NPC(void* data);//from save files
		~NPC();
		
		//inventory functions
		InventoryList getInventory();
		void setInventory(InventoryList inventory);
		void addItemToInventory(cordial::Item item);
		

		
	};
}
#endif /* defined(__NetSlash__NPC__) */
