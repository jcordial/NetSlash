//
//  NetSlashCore.h
//  NetSlash
//
//  Created by Jason Cordial on 10/18/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__NetSlashCore__
#define __NetSlash__NetSlashCore__

#include <iostream>
#include "../GameObjects/BaseObject.h"

enum NetSlashStatus {
	NetSlash_hasNotInitted = -1,
	NetSlash_normal = 0,
	NetSlash_exit = 1,
	NetSlash_fail_hasNotInitted = 2
};

enum NetSlashRenderType {
	NetSlash2D = 0,
	NetSlash3D = 1
};

namespace cordial{
	class GameObject;
}

struct ObjectNode {
 	cordial::BaseObject* object;
	ObjectNode* next;
	ObjectNode* prev;
};

namespace cordial{
	class NetSlashCore {
		static NetSlashStatus _status;

		static ObjectNode* rootObjectNode;
		
		static void update();
		static void start();
		
	public:
		static void init();
		static int run();
		
		static NetSlashStatus getStatus();
		static void registerObjectInLoop(BaseObject* object);
	
		NetSlashCore();

	private:
		static bool _isRunning;
		static bool _shouldExit;
		static bool _isInit;
		

	};
}
#endif /* defined(__NetSlash__NetSlashCore__) */
