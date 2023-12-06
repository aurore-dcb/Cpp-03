#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

    std::cout << GRAY << "ScavTrap created" << std::endl << RESET_COLOR;
    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

    std::cout << GRAY << "ScavTrap " << _name << " created" << std::endl << RESET_COLOR;
    return ;
}

ScavTrap::~ScavTrap( void ) {

    std::cout << GRAY << "ScavTrap destructor called" << std::endl << RESET_COLOR;
    return ;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap(copy) {

    std::cout << GRAY << "ScavTrap copy constructor of " << copy.getName() << " called" << std::endl << RESET_COLOR;
    *this = copy;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {

    _name = rhs.getName();
    _hitPoints = rhs.getHitPts();
    _energyPoints = rhs.getEnergyPts();
    _attackDamage = rhs.getAttackDmg();
    return *this;
}

void ScavTrap::guardGate( void ) {

    std::cout << "ScavTrap is now in Gate Keeper Mode 🛡️" << std::endl;
}

void ScavTrap::attack(const std::string& target) {

    if (_energyPoints > 0) {
        std::cout << "🔪 ScavTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage ! 🔪" << std::endl;
        _energyPoints--;
    }
    else {
        std::cout << "ScavTrap " << _name << " has no energy points left ! It cannot attack " << target << "." << std::endl;
    }
}

void ScavTrap::displayStatus( void ) const{

    std::cout << YELLOW;
    std::cout << "ScavTrap " << _name << " has :" << std::endl;
    std::cout << "  Hit points -> " << _hitPoints << std::endl;
    std::cout << "  Energy points -> " << _energyPoints << std::endl;
    std::cout << RESET_COLOR;
    return ;
}