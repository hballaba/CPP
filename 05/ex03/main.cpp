#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void) {
    {
        std::cout << std::endl;
        try 
        {
           Intern intern;
           Form *form = intern.makeForm("Form_5/25", "PresidentialPardonForm");
           Bureaucrat bureaucrat(5, "Burger");
           form->signForm(bureaucrat);
           form->execute(bureaucrat);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }    

    std::cout << std::endl;

    {
        try 
        {
           Intern intern;
           Form *form = intern.makeForm("Form_145/137", "ShrubberyCreationForm");
           Bureaucrat bureaucrat(5, "Burger");
           form->signForm(bureaucrat);
           form->execute(bureaucrat);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }  
    
    std::cout << std::endl;
    
    {
       
        try 
        {
           Intern intern;
           Form *form = intern.makeForm("Form_75/45", "RobotomyRequestForm");
           Bureaucrat bureaucrat(5, "Burger");
           form->signForm(bureaucrat);
           form->execute(bureaucrat);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }  

     std::cout << std::endl;
    
    {
       
        try 
        {
           Intern intern;
           Form *form = intern.makeForm("Form_75/45", "RobotomyRequestFor"); //whitout m
           Bureaucrat bureaucrat(5, "Burger");
           form->signForm(bureaucrat);
           form->execute(bureaucrat);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    } 

    return (0);
}
