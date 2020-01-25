#include "Button.h"
#include <iostream>

void Button::initialization(){
    buttonImage.loadFromFile("App/Image/image.png");
    buttonTexture.loadFromImage(buttonImage);

    buttonSprite.setTexture(buttonTexture);
    buttonSprite.setPosition(0,0);
}
sf::Sprite Button::getButtonSprite(){
    return buttonSprite;
}