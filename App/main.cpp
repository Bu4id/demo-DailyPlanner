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
    if (!variables.Image.loadFromFile("App/Image/image.png")){
        std::cout << "Error: failed to connect image" << std::endl;
    };
    variables.Texture.loadFromImage(variables.Image);
    
    //input
    variables.input.initialization(variables.font);

    variables.addButton.initialization(variables.Texture,sf::IntRect(0,53,121,51),20,20);
    variables.allRecords.initialization(variables.Texture,sf::IntRect(0,0,121,50),190,20);
    variables.notDoneButton.initialization(variables.Texture,sf::IntRect(0,111,121,51),359,20);
    
    //Window display
    windowView(&variables);

    return 0;
}