#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // {
    //     ScavTrap    scav("Bot");
    //     ClapTrap    clap("Mario");

    //     ScavTrap    scav2(scav);
    //     ClapTrap    clap2(clap);

    //     scav.attack("Mario");
    //     clap.takeDamage(20);
    //     clap.beRepaired(10);
    //     scav.guardGate();

    //     for (int i = 0; i < 11; i++)
    //         clap.beRepaired(20);

    //     scav.displayStatus();
    //     for (int i = 0; i < 25; i++)
    //     {
    //         scav.attack("Mario");
    //         scav.takeDamage(20);
    //         scav.beRepaired(20);
    //         // scav.displayStatus();
    //     }
    //     scav.displayStatus();
    // }
    // std::cout << "---------------------" << std::endl;
    // {
    //     FragTrap frag("polo");
    //     frag.displayStatus();
    //     frag.attack("Josh");
    //     frag.takeDamage(10);
    //     frag.beRepaired(10);
    //     frag.highFivesGuys();
    //     frag.displayStatus();
    // }
    {
        DiamondTrap diamond("John");
        DiamondTrap diamond2(diamond);

        diamond.displayStatus();
        diamond.attack("Johny");
        diamond.displayStatus();
        diamond2.displayStatus();

        diamond.beRepaired(10);
        diamond2.takeDamage(30);
        diamond.displayStatus();
        diamond2.displayStatus();
    }
    return (0);
}