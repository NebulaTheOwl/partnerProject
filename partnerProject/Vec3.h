#pragma once
class Vec3{
public:
	//Declares variables
	float x, y, z;
	//Default constructor
	Vec3(const float xIn = 0.0f, const float yIn = 0.0f, const float zIn = 0.0f) {
		x = xIn;
		y = yIn;
		z = zIn;
	}
	//Returns the dot product between two Vec3s
	float Dot(const Vec3& vec3In) const;
	//Returns the magnitude of the Vec3
	float Mag() const;
};

