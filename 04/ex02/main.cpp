#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
    {
        ISpaceMarine* bob = new TacticalMarine;
    	ISpaceMarine* jim = new AssaultTerminator;
    	ISquad* vlc = new Squad;
   		vlc->push(bob);
    	vlc->push(jim);
    	for (int i = 0; i < vlc->getCount(); ++i)
    	{
        	ISpaceMarine* cur = vlc->getUnit(i);
        	cur->battleCry();
        	cur->rangedAttack();
        	cur->meleeAttack();
    	}
    	delete vlc;
    }
	std::cout << std::endl;
	{
		
		
		ISpaceMarine* bob = new TacticalMarine;	
		ISpaceMarine* coc = bob->clone();
    	coc->rangedAttack();

		ISquad* vlc1 = new Squad;
   		vlc1->push(bob);
		vlc1->push(coc);
		
		ISquad* vlc2 = new Squad;
		vlc2 = vlc1;
		std::cout << "vls1 = " << vlc1->getCount()<< std::endl;
		std::cout << "vls2 = " << vlc2->getCount()<< std::endl;
		for (int i = 0; i < vlc2->getCount(); ++i)
    	{
        	ISpaceMarine* cur = vlc2->getUnit(i);
        	cur->battleCry();
        	cur->rangedAttack();
        	cur->meleeAttack();
    	}
		delete vlc2;
		
	}
    return 0;
}

