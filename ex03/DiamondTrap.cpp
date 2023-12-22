#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

    std::cout << GRAY << "DiamondTrap created" << std::endl << RESET_COLOR;
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name", 100, 50, 30) {

    _name = name;
    std::cout << GREEN << "DiamondTrap " << _name << " created" << std::endl << RESET_COLOR;
    return ;
}

DiamondTrap::~DiamondTrap( void ) {

    std::cout << GRAY << "DiamondTrap is destroyed" << std::endl << RESET_COLOR;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)  {

    std::cout << CYAN << "DiamondTrap copy constructor of " << copy._name << " called" << std::endl << RESET_COLOR;
    *this = copy;
    return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {

    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

void DiamondTrap::displayStatus( void ) const {

    std::cout << YELLOW;

    std::cout << "DiamondTrap " << _name << " has :" << std::endl;
    std::cout << "  Clapname " << ClapTrap::_name << std::endl;
    std::cout << "  Hit points -> " << _hitPoints << std::endl;
    std::cout << "  Energy points -> " << _energyPoints << std::endl;
    std::cout << RESET_COLOR;
    return ;
}

void DiamondTrap::attack( const std::string& target ) {

    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ) {

    std::cout << "My name is " << _name << ". My Clap name is " << ClapTrap::_name << "." << std::endl;
}
