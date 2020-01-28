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
        
        variables->input.write(event,mousePosition.x,mousePosition.y);
                
        
        if(variables->addButton.click(event,mousePosition.x,mousePosition.y,sf::Color(0,230,0),sf::Color(49,255,143))){
            std::cout << "click" <<std::endl;
            if(variables->input.getText()!=""){
                std::string query = "INSERT INTO records ( record, performed)VALUES ('"+variables->input.getText()+"',0 );";
                DataBase db;
                db.changeData(query);
            }
        }

                
        
            
            /*if(event.type == event.MouseButtonReleased){
                variables->input.check(event,mousePosition.x,mousePosition.y);
            }*/
            
            //variables->testButton.click();
    }
    

        
        
}
