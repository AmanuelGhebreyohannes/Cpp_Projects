#include <iostream>
#include "player.h"
int main()
{
    Player p1("Basketball");
    p1.set_first_name("Micheal");
    p1.set_last_name("Jordan");
    std::cout << "player : "<<p1 << std::endl;
    return 0;
}