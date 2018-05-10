#include "Export.h"

#include "World.h"


World* createWorldPtr()
{
	return new World();
}

void deleteWorldPtr(World* world)
{
	if (world)
		delete world;
}

int getNumActors(World* wPtr)
{
	if (wPtr)
		return wPtr->getNumActors();

	return -1;
}

Actor* createActorPtr(World* world, float x, float y, float z)
{
	if (world)
		return world->createActor(x, y, z);

	return nullptr;
}

void moveActorPtr(Actor* actor, float dx, float dy, float dz)
{
	if (actor)
		actor->move(dx, dy, dz);
}

float getX(Actor* actor)
{
	if (actor)
		return actor->x;

	return 0.0f;
}

float getY(Actor* actor)
{
	if (actor)
		return actor->y;

	return 0.0f;
}

float getZ(Actor* actor)
{
	if (actor)
		return actor->z;

	return 0.0f;
}