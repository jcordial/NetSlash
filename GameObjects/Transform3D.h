//
//  Transform3D.h
//  NetSlash
//
//  Created by Jason Cordial on 10/22/12.
//  Copyright (c) 2012 Jason Cordial. All rights reserved.
//

#ifndef __NetSlash__Transform3D__
#define __NetSlash__Transform3D__

#include <iostream>
#include "BaseComponent.h"

struct Vector3 {
	double x;
	double y;
	double z;
	
	friend Vector3 operator+(const Vector3& vect1, const Vector3& vect2){
		Vector3 retVect;
		retVect.x = vect1.x + vect2.x;
		retVect.y = vect1.y + vect2.y;
		retVect.z = vect1.z + vect2.z;
		return retVect;
	};
};

namespace cordial {
	class BaseObject;
	class Transform3D : public BaseComponent{
		cordial::BaseObject* _object;
		
		Vector3 _translation,_scale,_eulerRotation;
	public:
		Transform3D();
		~Transform3D();
		
		
		Vector3 getTranslation();
		Vector3 getScale();
		Vector3 getEulerRotation();
		
		cordial::BaseObject* baseObject();
		
		//itartion methods
		void update();
		
	protected:
		
	};
	
}
#endif /* defined(__NetSlash__Transform3D__) */
