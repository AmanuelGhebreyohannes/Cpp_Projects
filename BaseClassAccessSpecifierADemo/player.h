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
        ~Player();

        //see teh access we have to inherited members from Person
        void play(){
            m_full_name = "John Snow";
            m_age = 55;
            //m_address = " absdd";
        }
    private:
        int m_career_start_year = 0;
        double m_salary = 0.0;
        int health_factory = 0;


};

#endif