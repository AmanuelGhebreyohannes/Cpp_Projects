#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Person.h"

class Player : public Person
{
    friend std::ostream& operator << (std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string_view game_param);
        ~Player();
    private:
        std::string m_game = "None";

};

#endif