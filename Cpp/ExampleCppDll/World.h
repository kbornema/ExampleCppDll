#pragma once

#include "Export.h"
#include <vector>
#include <string>
#include "Actor.h"

class World
{

public:

	World();
	~World();

	Actor* createActor(float x, float y, float z);

	void print();

	int getNumActors();

private:

	std::vector<Actor*> _actors;
};