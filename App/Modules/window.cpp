#include "SVariables.h"
#include "window.h"

void windowView(Variables* variables){
    while (variables->window.isOpen())
    {
        sf::Event event;
        while (variables->window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                variables->window.close();
        }
        variables->window.clear();
        variables->window.display();
    }
}