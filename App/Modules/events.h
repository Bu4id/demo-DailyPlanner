#ifndef EVENTS_H
#define EVENTS_H

#include <SFML/Graphics.hpp>
#include "SVariables.h"
#include "DataBase.h"

//event management
void checkEvents(Variables* variables,sf::Event event, sf::Vector2i mousePosition);

#endif