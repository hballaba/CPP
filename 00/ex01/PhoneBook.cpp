#include "PhoneBook.hpp"

int 	main(void)
{
	contact 	contacts[8];
	int			i;
	std::string comanda;

	i = -1;
	while(!std::cin.eof())
	{
		std::cout << "Enter command: ";
		std::getline(std::cin,  comanda);
		//td::cin >> comanda;
		if (comanda == "EXIT")
		{	
			std::cout << "GOOD BYE!" << std::endl;
			exit(0);
		}
		else if (comanda == "ADD")
		{
				++i;
				if (i >= 8)
					std::cout << "Phonebook full, execution add is not possible" << std::endl;
				else
					contacts[i].ft_add(&contacts[i]);
		}
		else if (comanda == "SEARCH")
		{
			if (i >= 0)
				contacts[i].ft_serch(contacts, i);
			else
				std::cout << "Phonebook empty" << std::endl;			
		}
		else
			std::cout << comanda << " not valid comanda" << std::endl;
	}
	return (0);
}
