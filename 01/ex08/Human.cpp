#include "Human.hpp"

void intimidatingShout(std::string const & target), \
rangedAttack(std::string const & target), \
meleeAttack(std::string const & target);

void (*options []) (std::string const & target) = {
intimidatingShout,
rangedAttack,
meleeAttack
};

void meleeAttack(std::string const & target) {

    std::cout << GREEN << target << " melted down" DEFAULT<< std::endl;
}

void rangedAttack(std::string const & target) {
    
    std::cout << RED << target << " died" DEFAULT<< std::endl;
}

void intimidatingShout(std::string const & target) {
    
    std::cout << YELLOW << target << " stunned" DEFAULT<< std::endl;
 }

void Human::action(std::string const & action_name, std::string const & target) {
    
    int i = -1;
    std::string attaks[3] = {   "rangedAttack",
                                "meleeAttack",
                                "intimidatingShout"};
    while (++i < 3)
    {
        if (attaks[i] == action_name)
           (*options[i])(target); 
    }
 }