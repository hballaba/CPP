# include <iostream>
# include <string>

int     main(void)
{
	std::string origMessage  = "HI THIS IS BRAIN";
	std::string *ptrMessage = &origMessage;
	std::string &refMessage = origMessage;

	std::cout << std::endl << "Addres of origMessage is "  << &origMessage << std::endl;
	std::cout << "Value of origMessage is "  << origMessage << std::endl << std::endl;

	std::cout << "Addres of ptrMessage is "  << ptrMessage << std::endl;
	std::cout << "Value of ptrMessage is "  << *ptrMessage << std::endl << std::endl;

	std::cout << "Addres of refMessage is "  << &refMessage << std::endl;
	std::cout << "Value of refMessage is "  << refMessage << std::endl;
}