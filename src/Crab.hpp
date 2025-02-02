#include "Object.hpp"
#include "SFML/Graphics.hpp"

#pragma once
class Crab : public Object
{
public:
	Crab();
	void update() override;
	void draw(sf::RenderWindow& window) override;
private:
	sf::CircleShape body;
};

