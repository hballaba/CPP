#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
private:

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string name);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & toCopy);
    ShrubberyCreationForm &operator = (ShrubberyCreationForm const & toCopy);
    virtual void action(const std::string & target);  
    virtual void	execute(Bureaucrat const & executor); 
};

#endif