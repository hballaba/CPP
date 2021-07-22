#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria {
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const & toCopy);
	Ice & operator = (Ice const & toCopy);
		
	void			use(ICharacter&);
	std::string		getName() const;
	AMateria* 		clone() const;
	
private:
	std::string _name;
};

#endif