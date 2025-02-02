#include "Game.hpp"
#include "SFML/Graphics.hpp"
#include "Crab.hpp"

Game::Game() {
    objects.emplace_back(std::make_unique<Crab>(Crab{}));
    
    for (size_t i{}; i < static_cast<size_t>(Id::COUNT); ++i) {
        batches[Id{i}] = sf::VertexArray{sf::PrimitiveType::Triangles};
    }
}

void Game::run() {
    sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();

        for (auto& object : objects) {
            object->update();
            object->draw(batches.at(object->id()));
        }

        for (const auto& [_, batch] : batches) {
            window.draw(batch);
        }

        window.display();
    }
}