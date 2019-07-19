#include <iostream>
#include "App.h"

void App::run() {
    init();


    while (window->isOpen()) {
        handleEvents();

    }
}

void App::handleEvents() {
    sf::Event event{};
    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window->close();
        } else if (event.type == sf::Event::KeyPressed) {
            handleKays(event);
        }
    }
}

void App::init() {
    width = WINDOW_WIDTH;
    height = WINDOW_HEIGHT;

    window = new sf::Window(sf::VideoMode(width, height), "Snake");
}

void App::setSize(unsigned int w, unsigned int h) {
    width = w;
    height = h;

    window->setSize(sf::Vector2u(w, h));
}

void App::handleKays(sf::Event event) {
    if (event.key.code == sf::Keyboard::Escape) {
        std::cout << "the escape key was pressed" << std::endl;
        std::cout << "control:" << event.key.control << std::endl;
        std::cout << "alt:" << event.key.alt << std::endl;
        std::cout << "shift:" << event.key.shift << std::endl;
        std::cout << "system:" << event.key.system << std::endl;
    }
}
