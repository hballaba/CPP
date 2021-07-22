#ifndef PEON_HPP

# define PEON_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Victim.hpp"

class Peon: public Victim {
	public:
		Peon(std::string name);
		virtual ~Peon();
		Peon();
		Peon(const Peon & toCopy);
		Peon & operator = (const Peon & toCopy);
			
		virtual void		getPolymorphed() const;
		
};

std::ostream & operator << (std::ostream & stream, const Peon& sor);

#endif