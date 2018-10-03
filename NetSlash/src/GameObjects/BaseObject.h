//
//  BaseObject.h
//  NetSlash
//
//  Created by Jason Cordial on 10/21/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__BaseObject__
#define __NetSlash__BaseObject__

#include <iostream>
namespace cordial {
	class BaseComponent;
	class BaseObject {
		///doubly linked list
		struct COMPONENTS_LINKAGE {
			COMPONENTS_LINKAGE* next;
			COMPONENTS_LINKAGE* prev;
			cordial::BaseComponent* component;
		};
		
		COMPONENTS_LINKAGE* firstComponent;
		
		
	public:
		BaseObject();
		
		~BaseObject();
		
		void addComponent(cordial::BaseComponent* component);
		void removeComponent(cordial::BaseComponent* component);
		
		virtual void update();
	protected:
		
	};
	
}
#endif /* defined(__NetSlash__BaseObject__) */
