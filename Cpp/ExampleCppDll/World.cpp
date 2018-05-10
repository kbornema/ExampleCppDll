#include "World.h"
#include <iostream>

World::World()
{

}

World::~World()
{
	for (size_t i = 0; i < _actors.size(); i++)
	{
		auto actor = _actors[i];
		
		if (actor)
			delete actor;
	}

	_actors.clear();
}

Actor* World::createActor(float x, float y, float z)
{	
	Actor* a = new Actor(x, y, z);
	_actors.push_back(a);
	return a;
}

void World::print()
{
	for (size_t i = 0; i < _actors.size(); i++)
	{
		std::cout << _actors[i]->toString() << std::endl;
	}
}

int World::getNumActors()
{
	return _actors.size();
}