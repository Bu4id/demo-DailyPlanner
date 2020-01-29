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

        variables->window.setView(variables->recordsView);
        //view records
        
        if(variables->db.numberOfRecords > 0){
            int f = 5;
            sf::Text recordText[variables->db.numberOfRecords];
            for(int i = 0; i < variables->db.numberOfRecords; i++) 
            {
                recordText[i].setFont(variables->font);
                recordText[i].setCharacterSize(20);
                recordText[i].setFillColor(sf::Color::Black);
                recordText[i].setPosition(10,f);
                recordText[i].setString(variables->records[i][1]);
                f = f+20;
                variables->window.draw(recordText[i]);
                //std::cout <<variables->db.numberOfRecords<<std::endl;
            }
            std::cout << f << std::endl;
        }

        variables->window.setView(variables->window.getDefaultView());
        variables->window.display();
    }
}