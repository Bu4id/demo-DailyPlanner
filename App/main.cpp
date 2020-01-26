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
    //-Button button;
    //-button.initialization();
    variables.input.initialization(variables.font);

    //Window display
    windowView(&variables);

    return 0;
}