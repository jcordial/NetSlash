//
//  RenderingMiddleware.h
//  NetSlash
//
//  Created by Jason Cordial on 10/24/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__RenderingMiddleware__
#define __NetSlash__RenderingMiddleware__

#include <iostream>

namespace cordial {
	class RendererComponent;
}

struct RenderNode {
	RenderNode* next;
	RenderNode* prev;
	cordial::RendererComponent* renderer;
};

namespace cordial {
	class MainRenderer {
		static bool _isInit;
		static RenderNode*  firstComponent;
	public:
		static void __register3DRenderer(RendererComponent* renderer);
		static void init();
		static void update();
	};
}


#endif /* defined(__NetSlash__RenderingMiddleware__) */
