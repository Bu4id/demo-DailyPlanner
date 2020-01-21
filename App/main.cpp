#include <SFML/Graphics.hpp>
#include "Modules/SVariables.h"
#include "Modules/Widgets/Button.h"
#include "Modules/window.h"

int main()
{
    //Initialization of variables that will be required to store data throughout the cycle
    Variables variables;
    variables.window.create(sf::VideoMode(500, 600), "SFML works!");

    //sf::RenderWindow window(sf::VideoMode(500, 600), "SFML works!");
    variables.window.setFramerateLimit(20);
    
    Button button;
    button.initialization();
    windowView(&variables);

    return 0;
}