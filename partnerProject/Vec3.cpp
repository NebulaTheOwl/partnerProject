#include "Vec3.h"
#include <math.h>

float Vec3::Dot(const Vec3& vec3In) const{
	return x * vec3In.x + y * y + z * vec3In.z;
}

float Vec3::Mag() const {
	return sqrtf(x * x + y * y + z * z);
}