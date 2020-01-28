#include "SVariables.h"
#include "window.h"
#include "events.h"

//Window display function
void windowView(Variables* variables){
    while (variables->window.isOpen())
    {
        //take the coordinates of the mouse
        sf::Vector2i mousePosition = sf::Mouse::getPosition(variables->window);
        sf::Event event;
        checkEvents(variables,event,mousePosition);

        variables->window.clear(sf::Color(255, 255, 255));
        //draw
        //variables->input.draw(variables->window);
        variables->window.draw(variables->addButton.getButtinSprite());
        variables->window.draw(variables->notDoneButton.getButtinSprite());
        variables->window.draw(variables->allRecords.getButtinSprite());
        variables->window.display();
    }
}