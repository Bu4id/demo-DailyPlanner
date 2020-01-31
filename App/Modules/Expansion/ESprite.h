#ifndef E_SPRITE_H
#define E_SPRITE_H

#include <iostream>
#include <SFML/Graphics.hpp>

// Extension of class sf :: Text for storing auxiliary values
class ESprite : public sf::Sprite
{
    public:
        void setRecordId(std::string a);
        std::string getRecordId();

    private: 
        std::string recordId;
};
#endif