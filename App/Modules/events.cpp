#include "events.h"

//event management
void checkEvents(Variables* variables, sf::Event event,sf::Vector2i mousePosition)
{
    while (variables->window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            variables->window.close();
        }
        if(event.type == event.MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left){

            variables->input.check(event,mousePosition.x,mousePosition.y);

        }
        variables->input.write(event);
    }
}