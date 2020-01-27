#ifndef S_VARIABLES_H
#define S_VARIABLES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Widgets/Input.h"
#include "Widgets/Button.h"
struct Variables{
    sf::RenderWindow window;
    //storage of records and their id
    std::string** records;
    sf::Font font;
    sf::Text test;
    Input input;
    sf::Image Image;
    sf::Texture Texture;
    Button testButton;
};
#endif