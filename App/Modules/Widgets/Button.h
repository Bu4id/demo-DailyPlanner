#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "../Expansion/ESprite.h"
class Button{
    public:
        bool focus;
        void initialization(sf::Texture& texture,const sf::IntRect& rect, float x, float y);
        bool click(sf::Event event,float x,float y,const sf::Color& clickColor,const sf::Color& overColor);
        bool mouseOver(float x,float y,const sf::Color& overColor);
        //virtual void event();
        ESprite getButtinSprite();
        void setId(std::string id);
    private:      
        ESprite buttonSprite;
        

};
#endif