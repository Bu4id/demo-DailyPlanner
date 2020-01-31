#include "Button.h"


void Button::initialization(sf::Texture& texture,const sf::IntRect& rect, float x, float y)
{
    buttonSprite.setTexture(texture);
    buttonSprite.setTextureRect(rect);
    //buttonSprite.setScale(1, 1);
    buttonSprite.setPosition(x,y);
}
bool Button::mouseOver(float x,float y,const sf::Color& overColor){
    if (buttonSprite.getGlobalBounds().contains(x, y)){
        buttonSprite.setColor(sf::Color(overColor));
        return true;
    }else{
        buttonSprite.setColor(sf::Color::White);
        return false;
    }
}
bool Button::click(sf::Event event,float x,float y,const sf::Color& clickColor,const sf::Color& overColor){
    if(mouseOver(x, y, overColor)){
        if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
            buttonSprite.setColor(clickColor);
            //std::cout<<"yes"<<std::endl;
            return true;
        }
    }
    return false;
}
ESprite Button::getButtinSprite(){
    return buttonSprite;
}

void Button::setId(std::string id){
    buttonSprite.setRecordId(id);
}