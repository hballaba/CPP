#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm () {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) 
    :  Form(name, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & toCopy) {
    *this = toCopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &toCopy) {
    if (this == &toCopy)
        return (*this);
    *this = toCopy;
    return (*this);
}

void    ShrubberyCreationForm::action(const std::string & target) {
    std::string shrubbery = "_shrubbery";
    std::ofstream outf(target + shrubbery);
    if (outf.is_open()) {
    outf << "___________999999_99999999\n"
"__________9_____99________9\n"
" ________999_______________ 9999999\n"
" ________9_______________________999\n"
" _______ 99____9__________________ 9\n"
" ______999____999999999____________999\n"
" ______99______99999_______ 99_______99_99\n"
" _____999999_______________99__9_99___999999\n"
" ___999__9999__999_________9999999____99___999\n"
" ___9______999_9_9__9__9_999________________999\n"
" __ 9________9_9_9999999999_99________________99\n"
" ___99____9999_9_999_9999_9_9999999999________99\n"
" __9999___99999999___999_9__999____9999______999\n"
" _999_99999_999999_99_999____99999999________999\n"
" 99_____999__99_99999__99___999999_9_____999___99\n"
" 9_____999___9_9_999___99_99__9__99999__999_____99\n"
" 99___999999_999___9____999__9999999999999999____9\n"
" _99__999999999999_999__99__9999999__9999__9____999\n"
" __ 9999_____9_999______99___99_____999_________9\n"
" ____________999__99_____9___999_99999999999___99\n"
" ___99999999999999999_99_99_999999999999999999999\n"
" __ 9_____99999___999_99__9999___999________999\n"
" __ 99____99_______99_99___9999_99999_____999\n"
" __ 9_____9___9_999_9_99___99_999__999____99\n"
" __ 99_______9999__99______ 9________999999\n"
" ___9__9999999_____9___999__9__________999\n"
" ___999999999_____99__99999_99\n"
" ________________99___9999___99\n"
" _______________99____9999___99\n"
" ____________9999_____99_____99\n"
" ___________ 99_______99_____99\n"
" __________999___99___99_____99\n"
" ________9999____99___9______99\n"
" ______ 99999____9______99____99\n"
" _____99999999_999_9____99_9___99\n"
" ___9999999999999999999999999999999999\n"
" __ 99999999999_HBALLABA_9____99999_999}\n";
    }
    else   
        std::cout << "The fine not open" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) {
    if (!Form::getSigned())
        std::cout << Form::getName() << " unsigned!" << std::endl;
    else {
        if (Form::getGradeToWork() >= executor.getGrade())
           this->action("Home");
        else
            throw Form::GradeTooLowException();
    }
}