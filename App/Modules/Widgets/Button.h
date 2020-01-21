#ifndef BUTTON_H
#define BUTTON_H
    
#include <SFML/Graphics.hpp>

class Button{
    public:
        void initialization();
        sf::Sprite getButtonSprite();
    private:
        sf::Image buttonImage;
        sf::Texture buttonTexture;
        sf::Sprite buttonSprite;
        

};
#endif