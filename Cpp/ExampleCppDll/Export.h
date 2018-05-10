#pragma once

#define DLL_EXPORT_API __declspec(dllexport)

#include <string>

//forward declaration
class World;
class Actor;

extern "C"
{
	DLL_EXPORT_API World* createWorldPtr();
	DLL_EXPORT_API void deleteWorldPtr(World* wPtr);
	DLL_EXPORT_API Actor* createActorPtr(World* worldPtr, float x, float y, float z);
	DLL_EXPORT_API void moveActorPtr(Actor* actor, float dx, float dy, float dz);

	DLL_EXPORT_API int getNumActors(World* wPtr);

	DLL_EXPORT_API float getX(Actor* actor);
	DLL_EXPORT_API float getY(Actor* actor);
	DLL_EXPORT_API float getZ(Actor* actor);
}

