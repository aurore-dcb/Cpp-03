#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    {
        FragTrap frag("polo");
        frag.displayStatus();
        frag.attack("Josh");
        frag.takeDamage(10);
        frag.beRepaired(10);
        frag.highFivesGuys();
        frag.displayStatus();
    }
    return (0);
}