#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void) {
    
     {
        std::cout << std::endl;
        try 
        {
          Bureaucrat bureaucrat(5, "Burger");
          PresidentialPardonForm form("Form_25/5");
          form.signForm(bureaucrat);
          form.execute(bureaucrat);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << std::endl;
        try 
        {
                Bureaucrat bureaucrat(46, "Burger");
                RobotomyRequestForm form("Form_75/45");
                form.signForm(bureaucrat);
                form.execute(bureaucrat);
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
            Bureaucrat bureaucrat(101, "Burger");
            ShrubberyCreationForm form("Form_145/137");
            form.signForm(bureaucrat);
            form.execute(bureaucrat);
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
            Bureaucrat bureaucrat(100, "Burger");
            ShrubberyCreationForm form1("Form_145/137");
            bureaucrat.executeForm(form1);
            RobotomyRequestForm form2("Form_75/45");
            bureaucrat.executeForm(form2);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}
