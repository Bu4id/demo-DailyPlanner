#include "records.h"

void scrollingRecords(Variables* variables, sf::Event event){
    if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel){
            if(event.mouseWheelScroll.delta==-1 && variables->recordsView.getCenter().y < 465.f){
                variables->recordsView.move(0.f, 5.f);
                std::cout<<variables->recordsView.getCenter().y<<std::endl;
            }else if(variables->recordsView.getCenter().y > 300.f){
                variables->recordsView.move(0.f, -5.f);
                //variables->recordsView.setCenter(250.f, 300.f);
                std::cout << variables->recordsView.getCenter().y << std::endl;
            }
        }
}

void viewRecords(Variables* variables){
    variables->window.setView(variables->recordsView);
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
}