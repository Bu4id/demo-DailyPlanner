#ifndef INPUT_H
#define INPUT_H
#include <iostream>
#include <SFML/Graphics.hpp>
class Input{
    public:
        void initialization(sf::Font& font);
        void draw(sf::RenderWindow& window);
        void check(sf::Event event,float x,float y);
        void write(sf::Event event);
    private:
        sf::RectangleShape input;

        sf::Text inputText;
        std::string text;
        bool focus;

};
#endif