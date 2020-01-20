#include <SFML/Graphics.hpp>
#include "Classes/Widgets/Button.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    Button button;
    button.initialization();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(button.getButtonSprite());
        window.display();
    }

    return 0;
}