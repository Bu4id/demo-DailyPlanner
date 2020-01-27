#ifndef BUTTON_H
#define BUTTON_H
    
#include <SFML/Graphics.hpp>

class Button{
    public:
        bool focus;
        void initialization(sf::Texture& texture,const sf::IntRect& rect, float x, float y);
        void click(sf::Event event,float x,float y);
        bool mouseOver(float x,float y);
        //virtual void event();
        sf::Sprite getButtinSprite();
        
    protected:      
        sf::Sprite buttonSprite;
        

};
#endif