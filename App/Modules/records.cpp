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
            int t = 40;
            int s = 0;
            if(variables->trueButton){
                 delete[] variables->trueButton;
            }
            if(variables->falseButton){
                delete[] variables->falseButton;
            }
            variables->trueButton = new Button[variables->db.numberOfRecords];
            variables->falseButton = new Button[variables->db.numberOfRecords];
            sf::Text recordText[variables->db.numberOfRecords];
            sf::RectangleShape rectangle[variables->db.numberOfRecords];
            for(int i = 0; i < variables->db.numberOfRecords; i++) 
            {
                recordText[i].setFont(variables->font);
                recordText[i].setCharacterSize(20);
                recordText[i].setFillColor(sf::Color::Black);
                recordText[i].setPosition(10,t);
                recordText[i].setString(variables->records[i][1]);
                variables->trueButton[i].initialization(variables->texture,sf::IntRect(10,57,20,20),400,t);
                variables->trueButton[i].setId(variables->records[i][0]);

                variables->falseButton[i].initialization(variables->texture,sf::IntRect(10,120,20,20),450,t);
                variables->falseButton[i].setId(variables->records[i][0]);
                t+=100;

                rectangle[i].setSize(sf::Vector2f(500,99));
                rectangle[i].setFillColor(sf::Color(238,229,222));
                rectangle[i].setPosition(0,s);
                s+=100;

                
                variables->window.draw(rectangle[i]);
                variables->window.draw(recordText[i]);
                variables->window.draw(variables->trueButton[i].getButtinSprite());
                variables->window.draw(variables->falseButton[i].getButtinSprite());

                //std::cout <<variables->db.numberOfRecords<<std::endl;
            }
            std::cout << s << std::endl;
        }
}