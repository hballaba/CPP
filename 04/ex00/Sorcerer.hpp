#ifndef SORCERER_HPP

# define SORCERER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Peon.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer & toCopy);
		Sorcerer & operator = (const Sorcerer & toCopy);
		
		std::string getName() const;
		std::string getTitle() const;
		std::string getIntroduce() const;
		void        setName(std::string name);
		void        setTitle(std::string title);
		void	 	polymorph(Victim const &) const;

	private:
		Sorcerer();
		std::string _name;
		std::string _title;
};

std::ostream & operator << (std::ostream & stream, const Sorcerer& sor);

#endif