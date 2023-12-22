#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

    std::cout << GRAY << "FragTrap created" << std::endl << RESET_COLOR;
    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {

    std::cout << GRAY << "FragTrap " << _name << " created" << std::endl << RESET_COLOR;
    return ;
}

FragTrap::~FragTrap( void ) {

    std::cout << GRAY << "FragTrap is destroyed" << std::endl << RESET_COLOR;
    return ;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {

    std::cout << GRAY << "FragTrap copy constructor of " << copy.getName() << " called" << std::endl << RESET_COLOR;
    *this = copy;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {

    _name = rhs.getName();
    _hitPoints = rhs.getHitPts();
    _energyPoints = rhs.getEnergyPts();
    _attackDamage = rhs.getAttackDmg();
    return (*this);
}

void FragTrap::highFivesGuys( void ) {

    std::cout << "Who wants to do a high five guys !? 🙌" << std::endl;
    return ;
}
