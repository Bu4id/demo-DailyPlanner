#include <SFML/Graphics.hpp>
#include "Modules/SVariables.h"
#include "Modules/Widgets/Button.h"
#include "Modules/window.h"

//Point of entry
int main()
{
    //Initialization of variables that will be required to store data throughout the cycle
    Variables variables;
    //Window settings
    variables.window.create(sf::VideoMode(500, 600), "App",sf::Style::Close | sf::Style::Titlebar);
    variables.window.setFramerateLimit(30);
    
    if (!variables.font.loadFromFile("App/Font/LeagueMono-Medium.ttf")){
        std::cout << "Error: failed to connect font" << std::endl;
    };
    //Texture
    ;
    if (!variables.image.loadFromFile("App/Image/image.png")){
        std::cout << "Error: failed to connect image" << std::endl;
    };
    variables.texture.loadFromImage(variables.image);
    
    //input
    variables.input.initialization(variables.font);

    variables.addButton.initialization(variables.texture,sf::IntRect(0,53,121,51),20,20);
    variables.allRecords.initialization(variables.texture,sf::IntRect(0,0,121,50),190,20);
    variables.notDoneButton.initialization(variables.texture,sf::IntRect(0,111,121,51),359,20);
    
    //test
    //-variables.testView.reset(sf::FloatRect(350.f, 350.f, 350.f, 320.f));
    variables.recordsView = variables.window.getDefaultView();
    variables.recordsView.setViewport(sf::FloatRect(0.f, 0.2f, 1.f, 1.f));

    
    //take notes
    variables.db.receiveData("SELECT * FROM records",variables.records);
    //std::cout <<variables.db.numberOfRecords<<std::endl;
    
    //Window display
    windowView(&variables);
    std::cout <<"close"<<std::endl;
    arrayCleaning(variables.records,variables.db.numberOfRecords);
    return 0;
}