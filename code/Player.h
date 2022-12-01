#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player
{
    private:
        const float START_SPEED = 200;
        const float START_HEALTH = 100;
        Vector2f m_position;
        Sprite m_Sprite;
        Texture m_Texture;
};