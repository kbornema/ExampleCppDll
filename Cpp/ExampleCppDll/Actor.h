#pragma once
#include <string>

class Actor
{

public:

	Actor(float x, float y, float z);

	void move(float dx, float dy, float dz);

	std::string toString();

	float x;
	float y;
	float z;
};