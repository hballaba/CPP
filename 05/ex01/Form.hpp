#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form {
private:
    const std::string     _name;
    bool                  _signed;
    const int             _gradeToSigned;
    const int             _gradeToWork;
    

public:
    Form();
    Form(const std::string name, const int &GTS, const int &GTW);
    virtual ~Form();
    Form(Form const & toCopy);
    Form &operator = (Form const & toCopy);

    class GradeTooHighException;
    class GradeTooLowException;

    std::string     getName() const;
    bool            getSigned() const;
    int             getGradeToSigned() const;
    int             getGradeToWork() const;
    void            setSigned();
    void            beSigned(Bureaucrat const &bur);
    void            catchExpesion(int GTS, int GTW);
    void            action(std::string & target);
};

class Form::GradeTooLowException : public std::exception {
virtual const char* what() const throw();

};

class Form::GradeTooHighException : public std::exception {
virtual const char* what() const throw();
};

std::ostream &operator << (std::ostream &stream, const Form &form);


#endif
