//
//  main.cpp
//  NetSlash
//
//  Created by Jason Cordial on 10/10/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "NetSlashCore.h"
#include "GameObject2D.h"

int main(int argc, const char * argv[])
{

	// insert code here...
	std::cout << "Hello, Slasher!\n";	
	
	cordial::NetSlashCore::init();
	
	cordial::GameObject2D* ob1 = new cordial::GameObject2D::GameObject2D(), *obj2 = new cordial::GameObject2D::GameObject2D();
	
	int errorType = 0;
	while (!errorType) {
		errorType = cordial::NetSlashCore::run();
	}
	
	delete ob1;
	delete obj2;
	
    return 0;
}

