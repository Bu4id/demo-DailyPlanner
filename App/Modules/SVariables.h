#ifndef S_VARIABLES_H
#define S_VARIABLES_H
#include <iostream>
#include <SFML/Graphics.hpp>
struct Variables{
    sf::RenderWindow window;
    //storage of records and their id
    std::string** records;
};
#endif