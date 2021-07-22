#include "ZombieEvent.hpp"

int     main(void)
{
   ZombieEvent zombyEvent;
   Zombie *zom1;
 
   std::cout << std::endl << YELLOW "NEW ZOMBIE" << DEFAULT << std::endl << std::endl;
   zom1 = zombyEvent.newZombie("Crawler");
   zom1->announce();
   delete zom1;

   std::cout << std::endl << YELLOW "RANDOM NAME" << DEFAULT << std::endl << std::endl;
   zom1 = zombyEvent.randomChump();
   zom1->announce();
   delete zom1;

   std::cout << std::endl << YELLOW "SET TYPE ZOMBIE" << DEFAULT << std::endl << std::endl;
   zombyEvent.setZombieType("Trololo");
   zom1 = zombyEvent.randomChump();
   delete zom1;
   return (0);
}