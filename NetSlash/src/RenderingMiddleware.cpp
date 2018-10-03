//
//  RenderingMiddleware.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/24/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include "RenderingMiddleware.h"

bool cordial::MainRenderer::_isInit = false;
RenderNode* cordial::MainRenderer::firstComponent = 0;

void cordial::MainRenderer::__register3DRenderer(RendererComponent* renderer){
	if(firstComponent == 0){
		firstComponent = new RenderNode();
		firstComponent->next = 0;
		firstComponent->prev = 0;
		firstComponent->renderer = renderer;
	} else {
		RenderNode* current = firstComponent, * next = new RenderNode();
		next->renderer = renderer;
	
		while (current->next != 0){
			current = current->next;
		}
		current->next = next;
		next->prev = current;
		
	}
}

void cordial::MainRenderer::init() {
	if(!_isInit){
		
	}
}

void cordial::MainRenderer::update() {

}
