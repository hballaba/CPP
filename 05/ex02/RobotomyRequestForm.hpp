#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
private:

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string name);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & toCopy);
    RobotomyRequestForm &operator = (RobotomyRequestForm const & toCopy);
    virtual void action(const std::string & target);
    virtual void	execute(Bureaucrat const & executor);
};

#endif