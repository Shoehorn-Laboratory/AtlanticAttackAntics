#include "SFML/Graphics.hpp"

#pragma once
class Object
{
public:
	virtual void update() = 0;
	virtual void draw(sf::RenderWindow& window) = 0;
};

