#ifndef S_VARIABLES_H
#define S_VARIABLES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Widgets/Input.h"
#include "Widgets/Button.h"
#include "DataBase.h"

struct Variables{
    sf::RenderWindow window;
    //storage of records and their id
    std::string** records;
    sf::Font font;
    Input input;
    sf::Image image;
    sf::Texture texture;
    Button addButton;
    Button doneButton;
    Button notDoneButton;
    Button allRecords;
    sf::View recordsView;
    DataBase db;
    Button* trueButton;
    Button* falseButton;
    //test
    
    //sf::Text test;
};
#endif