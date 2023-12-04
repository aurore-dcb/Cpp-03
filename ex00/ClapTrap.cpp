#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) { }

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10),  _energyPoints(10), _attackDamage(0) { 

    std::cout << "ClapTrap " << _name << " created" << std::endl;
    return ;
}

ClapTrap::~ClapTrap( void ) {

    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) {

    std::cout << "ClapTrap copy constructor of " << copy.getName() << " called" << std::endl;
    *this = copy;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {

    // std::cout << "ClapTrap assignation operator called" << std::endl;
    _name = rhs.getName();
    _hitPoints = rhs.getHitPts();
    _energyPoints = rhs.getEnergyPts();
    _attackDamage = rhs.getAttackDmg();
    return *this;
}

void ClapTrap::attack(const std::string& target) {

    if (_energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage !" << std::endl;
        _energyPoints--;
    }
    else {
        std::cout << "ClapTrap " << _name << " has no energy points left ! It cannot attack " << target << "." << std::endl;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {

    if (_hitPoints > 0) {
        if (_hitPoints - amount < 0)
            _hitPoints = 0;
        else
            _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " took " << amount << " points of attack damage" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name << " already has 0 hit points ! It cannot take more damage." << std::endl;
    }
}

void ClapTrap::displayStatus( void ) const{

    std::cout << "ClapTrap " << _name << " has :" << std::endl;
    std::cout << "  Hit points -> " << _hitPoints << std::endl;
    std::cout << "  Energy points -> " << _energyPoints << std::endl;
    return ;
}

void ClapTrap::beRepaired( unsigned int amount ) {

    if (_energyPoints > 0) {
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << "reapared itself with " << amount << "hit points.";
    }
    else {
        std::cout << "ClapTrap " << _name << " has no energy points left ! It cannot reapare itself." << std::endl;
    }
}

// ----- getteurs ----- //

std::string ClapTrap::getName( void ) const {

    return _name;
}

int ClapTrap::getHitPts( void ) const {

    return _hitPoints;
}

int ClapTrap::getEnergyPts( void ) const {

    return _energyPoints;
}

int ClapTrap::getAttackDmg( void ) const {

    return _attackDamage;
}