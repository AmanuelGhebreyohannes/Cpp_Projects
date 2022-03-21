#include <iostream>
#include "player.h"
#include "nurse.h"
int main()
{
    Person p1("Daniel Gray",65,"Blue Sky St 233 #56");
    std::cout << "Person1 : "<<p1 << std::endl;

    std::cout << "------------"<<std::endl;
    Player player;
    player.m_full_name = "Samuel Jackson";
    
    std::cout << "Player : "<< player << std::endl;

    Nurse nurse;
    nurse.treat_unwell_person();
    std::cout << "Nurse : "<<nurse << std::endl;

    return 0;
}