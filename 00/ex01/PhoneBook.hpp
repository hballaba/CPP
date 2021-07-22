#ifndef PHONE_BOOK_HPP

# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>

class contact {

public:
	void	ft_add(contact *contacts)
{
	std::string data;

	std::cout << "ENTER FIRST NAME: ";
	std::getline(std::cin,  data);
	contacts->first_name = data;
	std::cout << "ENTER LAST NAME: ";
	std::getline(std::cin,  data);
	contacts->last_name = data;
	std::cout << "ENTER NICKNAME: ";
	std::getline(std::cin,  data);
	contacts->nickname = data;
	std::cout << "ENTER LOGIN: ";
	std::getline(std::cin,  data);
	contacts->login = data;
	std::cout << "ENTER POSTAL ADDRES: ";
	std::getline(std::cin,  data);
	contacts->postal_address = data;
	std::cout << "ENTER EMAIL ADRESS: ";
	std::getline(std::cin,  data);
	contacts->email_adress = data;
	std::cout << "ENTER PHONE NUMBER: ";
	std::getline(std::cin,  data);
	contacts->phone_number = data;
	std::cout << "ENTER BIRTHDAY DATA: ";
	std::getline(std::cin,  data);
	contacts->birthday_data = data;
	std::cout << "ENTER FAVORITE MEAL: ";
	std::getline(std::cin,  data);
	contacts->favorite_meal = data;
	std::cout << "ENTER UNDERWEAR COLOR: ";
	std::getline(std::cin,  data);
	contacts->underwear_color = data;
	std::cout << "ENTER DARKEST SECRET: ";
	std::getline(std::cin,  data);
	contacts->darkest_secret = data;
}

void	ft_write_contact(contact *contacts, int i)
{
	
	std::string str;

	i++;
	std::cout << "|" << std::setw(10) << i << "|";

	if (contacts->first_name.length() > 10)
	{
		str = contacts->first_name;

		std::cout << str.substr(0,9); 
		std::cout << "." << "|";
	}
	else
		std::cout << std::setw(10) << contacts->first_name << "|";

	if (contacts->last_name.length() > 10)
	{
		str = contacts->last_name;
		std::cout << str.substr(0,9);  
		std::cout << "." << "|";
	}
	else
		std::cout << std::setw(10) << contacts->last_name << "|";
	
	if (contacts->nickname.length() > 10)
	{
		str = contacts->nickname;
		std::cout << str.substr(0,9);
		std::cout << "." << "|" << std::endl;
	}
	else
		std::cout << std::setw(10) << contacts->nickname << "|" << std::endl;
}

void	ft_write_all(contact *contacts)
{
	std::cout <<std::endl << "FIRST NAME:      " << contacts->first_name << std::endl;
	std::cout << "LAST NAME:       " << contacts->last_name << std::endl;
	std::cout << "NICKNAME:        " << contacts->nickname << std::endl;
	std::cout << "LOGIN:           " << contacts->login << std::endl;
	std::cout << "POSTAL ADDRES:   " << contacts->postal_address << std::endl;
	std::cout << "EMAIL ADRESS:    " << contacts->email_adress << std::endl;
	std::cout << "PHONE NUMBER:    " << contacts->phone_number << std::endl;
	std::cout << "BIRTHDAY DATA:   " << contacts->birthday_data << std::endl;
	std::cout << "FAVORITE MEAL:   " << contacts->favorite_meal << std::endl;
	std::cout << "UNDERWEAR COLOR: " << contacts->underwear_color << std::endl;
	std::cout << "DARKEST SECRET:  " << contacts->darkest_secret << std::endl;
}

void	ft_serch(contact *contacts, int i)
{
	int num;
	char index;
	std::string ind;

	num = 0;
	if (i >= 8)
		i = 7;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (num <= i)
	{
		ft_write_contact(&contacts[num], num);
		num++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Enter index from 1 to " << i + 1 << ": ";
	std::getline(std::cin,  ind);
	i++;
	while ((ind[1] || ind[0] - '0' > i || ind[0] < '1') && !std::cin.eof())
	{
		std::cout << "Not valid index, enter again: ";
		std::getline(std::cin,  ind);
	}
	index = ind[0];
	num = index - '0';
		ft_write_all(&contacts[num - 1]);
}

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_adress;
	std::string phone_number;
	std::string birthday_data;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};

#endif
