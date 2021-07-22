#include "FragTrap.hpp"

int     main(void)
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
    
    return (0);
}
