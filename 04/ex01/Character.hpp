#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "AWeapon.hpp"
# include "Enemy.hpp"



class Character
{
	private:
		Character();
		AWeapon *_weapon;
		int _AP;
		std::string _names;
		

	protected:
		
	public:
		Character(std::string const & name);
		~Character();
		Character(Character const & toCopy);
		Character & operator = (Character const & toCopy);
		int 				flagWep;
		void 				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);
		int 				getAP() const;

		std::string			getWeapon() const;

		std::string virtual getName() const;
};

std::ostream & operator << (std::ostream & stream, const Character & character);

#endif