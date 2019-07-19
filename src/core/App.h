//
// Created by Ehsan Gharaei
//

#ifndef SNAKE_APP_H
#define SNAKE_APP_H

#include <SFML/Window.hpp>
#include "constants.h"

class App {

public:
    void run();

private:
    sf::Window* window;
    unsigned int width;
    unsigned int height;
    void init();
    void handleEvents();
    void handleKays(sf::Event event);
    void setSize(unsigned int width, unsigned int height);

};


#endif //SNAKE_APP_H
