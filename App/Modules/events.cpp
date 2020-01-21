#include "events.h"

//event management
void checkEvents(Variables* variables, sf::Event* event)
{
    while (variables->window.pollEvent(*event))
    {
        if (event->type == sf::Event::Closed)
            variables->window.close();
    }
}