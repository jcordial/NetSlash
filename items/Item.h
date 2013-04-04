//
//  Item.h
//  NetSlash
//
//  Created by Jason Cordial on 10/10/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__Item__
#define __NetSlash__Item__

#include <iostream>
#include "PhysicalObject.h"
namespace cordial{
	class Item {
		 std::string _name;
	public:
		
		Item();
		Item(std::string name);
		~Item();
		
		
		std::string getName();
		void setName(std::string name);
		
		bool applyItem(cordial::PhysicalObject object);
	};
}
#endif /* defined(__NetSlash__Item__) */
