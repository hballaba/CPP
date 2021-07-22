#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "RadScorpion.hpp"
# include "SuperMutant.hpp"


int main()
{
	{
		Character* me = new Character("me");
    	std::cout << *me;
    	Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
	}
		std::cout << std::endl << std::endl;
		
	{
		Character* me = new Character("Hballba");
    	std::cout << *me;
    	Enemy* b = new SuperMutant();
		AWeapon* pf = new PowerFist();
		me->equip(pf);
		std::cout << *me;
		me->equip(pf);
		std::cout << "HP SuperMutant = " << b->getHP() << std::endl;
		me->attack(b);
		std::cout << "HP SuperMutant = " << b->getHP() << std::endl;
		me->attack(b);
		me->attack(b);
		me->attack(b);
		me->attack(b);
		std::cout << *me;

		std::cout << std::endl;
		Enemy* c = new RadScorpion();
		std::cout << "HP RadScorpion = " << c->getHP() << std::endl;
		me->attack(c);
		std::cout << "HP RadScorpion = " << c->getHP() << std::endl;
		me->attack(c);
		me->attack(b);
		std::cout << *me;

		std::cout << std::endl;
		me->recoverAP();
		me->attack(c);
		std::cout << *me;
	}

	return 0;
}
