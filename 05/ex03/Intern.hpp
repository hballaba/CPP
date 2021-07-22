#ifndef INTREN_HPP

# define INTREN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
private:
    std::string _name;
    std::string _type;
public:
    Intern();
    ~Intern();
    Intern(Intern const & toCopy);
    Intern &operator = (Intern const & toCopy);

    Form    *makeForm(std::string const & name, std::string const & type);
    
    class 	errorMakeForm;
};

class Intern::errorMakeForm : public std::exception {
    public:
        virtual const char* what() const throw();
};

#endif