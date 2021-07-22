#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string name)
    :  Form(name, 75, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & toCopy) {
   *this = toCopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &toCopy) {
    if (this == &toCopy)
        return (*this);
    *this = toCopy;
    return (*this);
}

void    RobotomyRequestForm::action(const std::string & target) {
    std::srand(std::time(NULL));
	int long random = std::rand() % 2;
    if (random == 1)
        std::cout << target << " has been robotomized successfully" << std::endl; 
    else
        std::cout << target << " is a failure" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) {
    if (!Form::getSigned())
        std::cout << Form::getName() << " unsigned!" << std::endl;
    else {
        if (Form::getGradeToWork() >= executor.getGrade())
           this->action("Kiborg");
        else
            throw Form::GradeTooLowException();
    }
}