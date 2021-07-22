#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
	_rangeAttackDamage = 15;
	_armorDamageReduction = 3;
	
	std::cout << GREEN "ScavTrap " << name << " factory-assembled " DEFAULT<< std::endl;
}
ScavTrap::~ScavTrap()
{
     std::cout << YELLOW "ScavTrap " << _name << " disassembled" DEFAULT<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
   this->operator=(toCopy);
}

ScavTrap &ScavTrap::operator= (const ScavTrap &toCopy) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_maxHitPoints = toCopy._maxHitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_maxEnergyPoints = toCopy._maxEnergyPoints;
	this->_level = toCopy._level;
	this->_meleeAttackDamage = toCopy._meleeAttackDamage;
	this->_rangeAttackDamage = toCopy._rangeAttackDamage;
	this->_armorDamageReduction = toCopy._armorDamageReduction;
	return (*this);
}

std::string 	ScavTrap::getName() {
	return(this->_name);
}

int  ScavTrap::getXP() {
	return(this->_hitPoints);
}

int  ScavTrap::getArmor() {
	return(this->_armorDamageReduction);
}

void ScavTrap::setXP(int xp) {
	this->_hitPoints = xp;
}

int		piupiuAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		paupauAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		tratataAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		tidishAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		knifeAttack(std::string const & target, int &_armorDamageReduction, std::string _name);

int		(*comanda []) (std::string const & target, int &_armorDamageReduction, std::string _name) = {
		piupiuAttack,
		paupauAttack,
		tratataAttack,
		tidishAttack,
		knifeAttack
};

int		piupiuAttack(std::string const & target, int &_armorDamageReduction,  std::string _name) {

    int damage = 15 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "SCAV-TP " << _name << "attacks " << target \
    << " piu-piu attack, causing " << damage << " points of damage!" << std::endl;
	return (damage);
}

int 	paupauAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage;
	damage = 25 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "SCAV-TP " << _name << " attacks " << target \
    << " pau-pau attack, causing " << damage << " points of damage!" << std::endl;
	return (damage);
}

int	 	tratataAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage = 35 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "SCAV-TP " << _name << " attacks " << target \
    << " tra-ta-ta attack, causing " << damage << " points of damage!" << std::endl;
	return (damage);
 }

 int	 tidishAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage = 55 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "SCAV-TP " << _name << " attacks " << target \
    << " tidish attack, causing " << damage << " points of damage!" << std::endl;
	return (damage);
 }

 int	 knifeAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    int damage = 5 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
    std::cout << "SCAV-TP " << _name <<  " attack " << target \
    <<  " knife attack, causing " << damage << DEFAULT" points of damage!" << std::endl;
	return (damage);
 }

int		ScavTrap::challengeNewcomer(std::string const & target) {

	int damage;
	int random;
	
	if (this->_energyPoints < 25)
	{
			std::cout << "Not enough energy to attack" << std::endl;
			return (0);
	}
	this->_energyPoints = this->_energyPoints - 25;
	std::srand(std::time(NULL));
	random = std::rand() % 5;
	damage = (*comanda[random])(target, this->_armorDamageReduction, this->_name);
	return (damage);
}
