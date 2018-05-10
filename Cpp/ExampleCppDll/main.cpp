#include "World.h"
#include <iostream>

int main(int argc, char *argv[])
{
	World* w = new World();

	auto kai = w->createActor(0.0f, 0.0f, 0.0f);

	kai->move(1.0f, 0.0f, 0.0f);

	w->print();

	std::cout << w->getNumActors() << std::endl;

	std::getchar();

	delete w;
	return 0;
}