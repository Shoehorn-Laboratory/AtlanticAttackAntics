#include "Crab.hpp"

Crab::Crab()
	: body{sf::CircleShape{100.}}
{}

void Crab::update() {
	this->body.move({0.01, 0.});
}

void Crab::draw(sf::RenderWindow& window) {
	window.draw(this->body);
}