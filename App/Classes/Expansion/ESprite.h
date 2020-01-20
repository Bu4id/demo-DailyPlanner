#ifndef E_SPRITE_H
#define E_SPRITE_H

#include <SFML/Graphics.hpp>

// Extension of class sf :: Text for storing auxiliary values
class ESprite : public sf::Sprite
{
    public:
        void setRecordId(int a);
        int getRecordId();

    private: 
        int recordId;
};
#endif