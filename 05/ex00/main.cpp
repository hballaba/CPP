#include "Bureaucrat.hpp"
# include <iostream>

int main(void) {
     {
        std::cout << std::endl;
        try 
        {
        Bureaucrat bureaucrat(151, "Burger");
        
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
        Bureaucrat bureaucrat(149, "Burger");
        bureaucrat.setIncrement();  
    
        std::cout << bureaucrat.getName() << std::endl;
        std::cout << bureaucrat.getGrade() << std::endl;

        bureaucrat.setIncrement();
        std::cout << bureaucrat << std::endl;
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
        Bureaucrat bureaucrat(2, "Burger");
        std::cout << bureaucrat << std::endl;
        bureaucrat.setDecrement();  
        std::cout << bureaucrat << std::endl;
        }
    catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}
