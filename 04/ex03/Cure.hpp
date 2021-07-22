#ifndef CURE_HPP

# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const & toCopy);
	Cure & operator = (Cure const & toCopy);
	
	void			use(ICharacter&);
	std::string		getName() const;
	AMateria* 		clone() const;
	
private:
	std::string _name;
	
};

#endif