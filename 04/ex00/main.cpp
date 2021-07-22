#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void) {
   { 
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
   }
   std::cout << std::endl;
   {
       Sorcerer boby("Boby", "Funny");
       Sorcerer dody("Dody", "Crazy");
       boby = dody;
       std::cout << boby << std::endl;
   }
    return 0;
}
