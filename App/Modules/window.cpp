#include "SVariables.h"
#include "window.h"
#include "events.h"

//Window display function
void windowView(Variables* variables){
    while (variables->window.isOpen())
    {
        sf::Event event;
        checkEvents(variables,&event);
        /*-while (variables->window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                variables->window.close();
        }*/
        variables->window.clear();
        variables->window.display();
    }
}