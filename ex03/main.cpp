#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("John");
    DiamondTrap diamond2(diamond);

    std::cout << std::endl;

    diamond.displayStatus();
    diamond.whoAmI();
    diamond.attack("Johny");
    diamond.displayStatus();

    std::cout << std::endl;

    diamond2.displayStatus();
    diamond.beRepaired(10);
    diamond2.takeDamage(30);
    
    diamond.displayStatus();
    diamond2.displayStatus();
    std::cout << std::endl;

    return (0);
}