#ifndef AWEAPON_HPP

# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {
	private:

	protected:	
		std::string _name;
		int 		_apcost;
		int 		_damage;
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon();

	public:
		
		virtual ~AWeapon();
		AWeapon(const AWeapon& toCopy);
		AWeapon & operator = (const AWeapon & toCopy);
		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

};

#endif