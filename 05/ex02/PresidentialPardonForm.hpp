#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:

public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string name);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & toCopy);
    PresidentialPardonForm &operator = (PresidentialPardonForm const & toCopy);
    virtual void    action(const std::string & target);
    virtual void	execute(Bureaucrat const & executor);
};

#endif