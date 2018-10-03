//
//  GameObject2D.h
//  NetSlash
//
//  Created by Jason Cordial on 10/22/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__GameObject2D__
#define __NetSlash__GameObject2D__

#include <iostream>
#include "GameObject.h"
#include "Transform3D.h"
namespace cordial {
	
	class GameObject2D : public GameObject{
		///doubly linked list
		struct COMPONENTS_LINKAGE {
			COMPONENTS_LINKAGE* next;
			COMPONENTS_LINKAGE* prev;
			cordial::BaseComponent* component;
		};
		
		COMPONENTS_LINKAGE* firstComponent;
		
		
	public:
		GameObject2D();
		~GameObject2D();
		
		Transform3D* transform = 0;
		
		
		void update();
		
	protected:
		
	};
	
}
#endif /* defined(__NetSlash__GameObject2D__) */
