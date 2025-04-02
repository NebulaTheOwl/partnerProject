#pragma once
class Vec3{
public:
	//Declares variables
	float x, y, z;
	//Default constructor
	Vec3(const int xIn = 0, const float yIn = 0, const float zIn = 0) {
		x = xIn;
		y = yIn;
		z = zIn;
	}
	//Returns the dot product between two Vec3s
	int Dot(const Vec3& vec3In) const;
	//Returns the magnitude of the Vec3
	int Mag() const;
};

