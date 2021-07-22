#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main(void)
{
    std::cout << std::endl;
    std::cout << RED "\t\tSuperTrap" DEFAULT << std::endl;
    {
        SuperTrap megaCoolWarrior("Mega cool warrior");
        megaCoolWarrior.rangedAttack("Zeus Panhellenios");
        megaCoolWarrior.meleeAttack("Tor");
    }
    
    std::cout << std::endl;
    std::cout << RED "\t\tNinjaTrap" DEFAULT << std::endl;
    {
        NinjaTrap leonardo("Leonardo");
        NinjaTrap donatelo("Donatelo");
        FragTrap vally("Vally");
        ScavTrap robodog("Robodog");

        leonardo.ninjaShoebox(vally);
        donatelo.ninjaShoebox(robodog);
        leonardo.ninjaShoebox(donatelo);

    }
        
    std::cout << std::endl;
    std::cout << RED "\t\tScavTrap" DEFAULT << std::endl;
    
    {
        ScavTrap robodog("Robodog");
        ScavTrap robocat("Robocat");
        std::cout << std::endl;
        robodog.rangedAttack("Zomby");
    
        robocat.rangedAttack("Zomby");
        std::cout << std::endl;
        robodog.meleeAttack("Nynja");
    
        robodog.challengeNewcomer("Tanos");
        robodog.beRepaired(10);
    }

    std::cout << std::endl;
    std::cout << RED "\t\tFragTrap" DEFAULT << std::endl;
    
    {
        FragTrap vally("Vally");
        FragTrap eva("Eva");
        std::cout << std::endl;
       
        eva.takeDamage(vally.rangedAttack("Eva"));
        vally.takeDamage(eva.rangedAttack("Vally"));
        std::cout << std::endl;
        eva.takeDamage(vally.meleeAttack("Eva"));
    
        eva.takeDamage(vally.vaulthunter_dot_exe("Eva"));
        vally.beRepaired(1);
        eva.beRepaired(22);
    }
    
    return (0);
}
