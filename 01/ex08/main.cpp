#include "Human.hpp"

int     main(void)
{
    Human humans;

    std::string const attack1  = "rangedAttack";
    std::string const attack2  = "meleeAttack";
    std::string const attack3  = "intimidatingShout";
    std::string const target1  = "Snowman";
    std::string const target2  = "Snow woman";
    std::string const target3  = "Bigfoot";

    humans.action(attack1, target2);
    humans.action(attack2, target3);
    humans.action(attack3, target1);
    return (0);
}