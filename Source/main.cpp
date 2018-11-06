
#include <iostream>

#include "manager.hpp"

int main(int, char**)
{
	if (manager::Init() != 0)
	{
		std::cerr << "There was a problem with initialization." << std::endl;
		return -1;
	}

	while (manager::Handler())
	{
		manager::Update();
		manager::Render();
	}

	manager::Shutdown();

	return 0;
}