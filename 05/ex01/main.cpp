#include "Bureaucrat.hpp"
#include "Form.hpp"
# include <iostream>

int main(void) {
     {
        std::cout << std::endl;
        try 
        {
            Form form("bill of rights", 155, 50);
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
            Form form("bill of rights", 15, 0);
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
        Form form("BILL OF RIGHT", 100, 50);
        form.beSigned(bureaucrat);
        bureaucrat.setIncrement(); 
        std::cout << bureaucrat << std::endl;
        bureaucrat.singForm(form);
        std::cout << form << std::endl; 
         }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}
