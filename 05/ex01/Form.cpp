#include "Form.hpp"

class Bureaucrat;

Form::Form() : _name("Defualt"), _gradeToSigned(100), _gradeToWork(100){

}

Form::Form(const std::string name, const int &GTS, const int &GTW) 
    : _name(name), _gradeToSigned(GTS), _gradeToWork(GTW) {
    
    Form::catchExpesion(GTS, GTW);
    _signed = false;
}

Form::~Form() {}

Form::Form(Form const & toCopy) 
: _name(toCopy._name), _gradeToSigned(toCopy._gradeToSigned), _gradeToWork(toCopy._gradeToWork) 
{
   *this = toCopy;
}

Form & Form::operator = (Form const & toCopy) {
    if (this == &toCopy)
        return (*this);
    *this = toCopy;
    return (*this);
}

std::string     Form::getName() const { return (_name);}

bool            Form::getSigned() const { return (_signed);}

int             Form::getGradeToSigned() const { return (_gradeToSigned);}

int             Form::getGradeToWork() const { return (_gradeToWork);}

void            Form::setSigned() {
    _signed = true;
}

void            Form::beSigned(Bureaucrat const &bur) {
    if (this->getSigned() == true)
        std::cout << "Form " << this->getName() << " already signed" << std::endl;

    if (bur.getGrade() <= this->getGradeToSigned()) {
        this->_signed = true;
        std::cout << "Form " << this->getName() << " signed" << std::endl;
    }
    else
        std::cout << "Form " << this->getName() << " not signed, grade too small " << std::endl;
}


std::ostream & operator << (std::ostream &stream, const Form & form) {
    if (form.getSigned() == false)
        stream << "Form " << form.getName() << " unsigned for singing need " << form.getGradeToSigned() \
        << " grade,  for execeting need " << form.getGradeToWork() << " grade!" << std::endl;
    else
        stream << "Form " << form.getName() << " signed for singing was need " << form.getGradeToSigned() \
        << " grade, for execeting need " << form.getGradeToWork() << " grade!" << std::endl;
    return (stream);
}

void            Form::catchExpesion(int GTS, int GTW) {
    if (GTS < 1)
        throw Form::GradeTooHighException();
    if (GTS > 150)
        throw Form::GradeTooLowException();
    if (GTW < 1)
        throw Form::GradeTooHighException();
    if (GTW > 150)
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade to Form Too High Exception, the constructor is not performed");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade to Form Too Low Exception, the constructor is not performed");
}