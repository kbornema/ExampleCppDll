#include "Actor.h"

Actor::Actor(float x, float y, float z)
	: x(x), y(y), z(z)
{

}

void Actor::move(float dx, float dy, float dz)
{
	x += dx;
	y += dy;
	z += dz;
}

std::string Actor::toString()
{
	return std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z);
}