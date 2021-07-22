#include "Intern.hpp"

Form *Shrubbery(std::string const & target), \
*Robotomy(std::string const & target), \
*Presidential(std::string const & target);

Form *(*options []) (std::string const & target) = {
Shrubbery,
Robotomy,
Presidential
};

Intern::Intern() {};

Intern::~Intern() {};

Intern::Intern(Intern const &toCopy) {
    *this = toCopy;
}

Intern & Intern::operator = (Intern const & toCopy) {
    if (this == &toCopy)
        return (*this);
    *this = toCopy;
    return (*this);
}

Form *Shrubbery(std::string const & name) {
    ShrubberyCreationForm *form = new ShrubberyCreationForm(name);
    return (form);
}

Form *Presidential(std::string const & name) {
    PresidentialPardonForm *form = new PresidentialPardonForm(name);
    return (form);
}   

Form *Robotomy(std::string const & name) {
    RobotomyRequestForm *form = new RobotomyRequestForm(name);
    return (form);
}

Form *Intern::makeForm(std::string const & name, std::string const & type) {
    
    int i = -1;
    std::string types[3] = {  "ShrubberyCreationForm",
                              "RobotomyRequestForm",
                              "PresidentialPardonForm"};
    while (++i < 3)
    {
        if (types[i] == type) {
            return ((*options[i])(name));
        }
    }
    throw Intern::errorMakeForm();
    return (0);
}

const char * Intern::errorMakeForm::what() const throw() {
    return ("This form is not existed!");
}
