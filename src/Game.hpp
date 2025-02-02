#include "Object.hpp"
#include <memory>

#pragma once
class Game
{
public:
	Game();
	void run();
private:
	std::vector<std::unique_ptr<Object>> objects;
};

