#include "Input.h"

void Input::initialization(sf::Font& font){
    input.setSize(sf::Vector2f(300, 20));
    input.setFillColor(sf::Color::White);
    input.setOutlineThickness(1);
    input.setOutlineColor(sf::Color(127,127,127));
    input.setPosition(10,20);

    inputText.setFont(font);
    inputText.setString("");
    inputText.setCharacterSize(20);
    inputText.setFillColor(sf::Color::Red);
    inputText.setPosition(10,18);
    
}

void Input::draw(sf::RenderWindow& window){
    window.draw(input);
    window.draw(inputText);
}
//area click test
void Input::check(sf::Event event,float x,float y){
    if (input.getGlobalBounds().contains(x, y)){
        focus = true;
    }else{
        focus = false;
    }
}
void Input::write(sf::Event event){
    if(focus && event.type == sf::Event::TextEntered &&sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)){
        text = text.substr(0, text.size() - 1);;
        inputText.setString(text);
        //std::cout <<"dd"<<std::endl;
    }else if(focus && event.type == sf::Event::TextEntered)
    {
        text += event.text.unicode;
        inputText.setString(text);
        //std::cout <<text<<std::endl;
    }
}

