//
//  BaseComponent.h
//  NetSlash
//
//  Created by Jason Cordial on 10/17/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__BaseComponent__
#define __NetSlash__BaseComponent__

#include <iostream>

namespace cordial {
	class BaseObject;
	class BaseComponent{
		cordial::BaseObject* _object;
		
	public:
		BaseComponent();
		~BaseComponent();
		
		cordial::BaseObject* baseObject();
		void setGameObject(cordial::BaseObject* object);

		//itartion methods
		virtual void update();

	protected:
		
	};

}
#endif /* defined(__NetSlash__BaseComponent__) */
