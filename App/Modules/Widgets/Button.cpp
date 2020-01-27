#include "Button.h"
#include <iostream>


void Button::initialization(sf::Texture& texture,const sf::IntRect& rect, float x, float y)
{
    buttonSprite.setTexture(texture);
    buttonSprite.setTextureRect(rect);
    //buttonSprite.setScale(1, 1);
    buttonSprite.setPosition(x,y);
}
bool Button::mouseOver(float x,float y){
    if (buttonSprite.getGlobalBounds().contains(x, y)){
        buttonSprite.setColor(sf::Color(10, 100, 100));
        return true;
    }else{
        buttonSprite.setColor(sf::Color::White);
        return false;
    }
}
void Button::click(sf::Event event,float x,float y){
    if(mouseOver(x, y)){
        if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
            buttonSprite.setColor(sf::Color(50, 50, 50));
            std::cout<<"yes"<<std::endl;
        }
    }
}
sf::Sprite Button::getButtinSprite(){
    return buttonSprite;
}