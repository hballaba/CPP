#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string name) 
    : Form(name, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & toCopy) {
   *this = toCopy;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &toCopy) {
    if (this == &toCopy)
       return (*this);
    *this = toCopy;
    return (*this);
}

void    PresidentialPardonForm::action(const std::string & target) {
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) {
    if (!Form::getSigned())
        std::cout << Form::getName() << " unsigned!" << std::endl;
    else {
        if (Form::getGradeToWork() >= executor.getGrade())
           this->action("Medvedev");
        else
            throw Form::GradeTooLowException();
    }
}

