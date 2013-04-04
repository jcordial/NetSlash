//
//  GameObject.h
//  NetSlash
//
//  Created by Jason Cordial on 10/17/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__GameObject__
#define __NetSlash__GameObject__

#include <iostream>
#include <list>
#include "BaseComponent.h"
#include "BaseObject.h"

namespace cordial {
	
	class GameObject : public BaseObject{
		///doubly linked list
		struct COMPONENTS_LINKAGE {
			COMPONENTS_LINKAGE* next;
			COMPONENTS_LINKAGE* prev;
			cordial::BaseComponent* component;
		};
		
		COMPONENTS_LINKAGE* firstComponent;

		
	public:
		GameObject();
		~GameObject();
		
		virtual void update();
		
		protected:
		
	};
	
}
#endif /* defined(__NetSlash__GameObject__) */
