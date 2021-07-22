# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    
}

Bureaucrat::Bureaucrat(int grade, const std::string name) 
    : _grade(grade), _name(name) {
   
Bureaucrat::catchExpesion(grade);
}

Bureaucrat::~Bureaucrat () { 

}

Bureaucrat::Bureaucrat(Bureaucrat const & toCopy) {
    *this = toCopy;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const & toCopy) {
    
    if(this == &toCopy)
        return(*this);
    *this = toCopy;
    return (*this);
}

std::string		Bureaucrat::getName() const {
    return (_name);
}

int				Bureaucrat::getGrade() const {
    return (this->_grade);
}

void			Bureaucrat::setIncrement() {
   Bureaucrat::catchExpesion(_grade - 1);
    _grade--;
}

void			Bureaucrat::setDecrement() {
    Bureaucrat::catchExpesion(_grade + 1);
    _grade++;  
}

std::ostream   & operator << (std::ostream &stream, const Bureaucrat & Bur) {
    stream << Bur.getName() << ", bureaucrat grade " << Bur.getGrade();
    return (stream);
}

void            Bureaucrat::catchExpesion(int grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade Too High Exception, the operation is not performed");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade Too Low Exception, the operation is not performed");
}
