#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

    std::cout << GRAY << "ClapTrap created" << std::endl << RESET_COLOR;
    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10),  _energyPoints(10), _attackDamage(0) { 

    std::cout << GRAY << "ClapTrap " << _name << " created" << std::endl << RESET_COLOR;
    return ;
}

ClapTrap::ClapTrap( std::string name , int hitPoints , int energyPoints , int attackDamage ) : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {

    std::cout << GRAY << "ClapTrap " << _name << " created" << std::endl << RESET_COLOR;
    return ;
}

ClapTrap::~ClapTrap( void ) {

    std::cout << GRAY << "ClapTrap destructor called" << std::endl << RESET_COLOR;
    return ;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) {

    std::cout << GRAY << "ClapTrap copy constructor of " << copy.getName() << " called" << std::endl << RESET_COLOR;
    *this = copy;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {

    _name = rhs.getName();
    _hitPoints = rhs.getHitPts();
    _energyPoints = rhs.getEnergyPts();
    _attackDamage = rhs.getAttackDmg();
    return *this;
}

void ClapTrap::attack(const std::string& target) {

    if (_energyPoints > 0) {
        std::cout << "🔪 ClapTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage ! 🔪" << std::endl;
        _energyPoints--;
    }
    else {
        std::cout << "ClapTrap " << _name << " has no energy points left ! It cannot attack " << target << "." << std::endl;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {

    if (_hitPoints > 0) {
        if ( (int)amount > _hitPoints )
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

    std::cout << YELLOW;
    std::cout << "ClapTrap " << _name << " has :" << std::endl;
    std::cout << "  Hit points -> " << _hitPoints << std::endl;
    std::cout << "  Energy points -> " << _energyPoints << std::endl;
    std::cout << RESET_COLOR;
    return ;
}

void ClapTrap::beRepaired( unsigned int amount ) {

    if (_energyPoints > 0) {
        _hitPoints += amount;
        std::cout << "🧪 ClapTrap " << _name << " reapared itself with " << amount << " hit points. 🧪" << std::endl;
        _energyPoints--;
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