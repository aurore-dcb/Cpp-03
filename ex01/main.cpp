#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// int main()
// {
//     ScavTrap scav("Roger");
//     std::cout << scav.getHitPts() << std::endl;
//     std::cout << scav.getEnergyPts() << std::endl;
//     std::cout << scav.getAttackDmg() << std::endl;
//     scav.guardGate();
//     scav.attack("jaques");
//     // ClapTrap clap("Paul");
//     // ClapTrap copy(clap);
//     // ClapTrap neww = ClapTrap();

//     // neww = clap;

//     // std::cout << std::endl << RED << "--- copy and neww ---" << std::endl << RESET_COLOR;
//     // copy.attack("Pierre");
//     // copy.attack("Pierre");
//     // copy.displayStatus();
//     // neww.attack("Pierre");
//     // neww.displayStatus();

//     // std::cout << RED << std::endl << "--- clap ---" << std::endl << RESET_COLOR;
//     // clap.displayStatus();
//     // std::cout << std::endl;
//     // clap.beRepaired(5);
//     // clap.displayStatus();
//     // clap.attack("Pierre");
//     // clap.displayStatus();

//     // clap.takeDamage(50);
//     // clap.displayStatus();
//     // for (int i = 0; i < 8 ; i++) {
//     //     clap.beRepaired(10);
//     //     // clap.displayStatus();
//     // }
//     // clap.displayStatus();
//     // clap.attack("Pierre");
//     // clap.takeDamage(50);
//     // clap.displayStatus();
//     // std::cout << std::endl;
//     return (0);
// }

int main()
{
    ScavTrap    scav("Bot");
    ClapTrap    clap("Mario");
    
    ScavTrap    scav2(scav);
    ClapTrap    clap2(clap);

    std::cout << std::endl;

    scav.attack("Mario");
    clap.takeDamage(20);
    clap.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl << std::endl;

    // test energy points
    clap.displayStatus();

    std::cout << std::endl;

    for (int i = 0; i < 11; i++)
        clap.beRepaired(20);
    clap.displayStatus();

    std::cout << std::endl;

    // test energy points
    scav.displayStatus();
    std::cout << std::endl;
    for (int i = 0; i < 25; i++)
    {
        scav.attack("Mario");
        // messages de scav identique au message de clap
        scav.takeDamage(20); 
        scav.beRepaired(20);
        // scav.displayStatus();
    }
    scav.displayStatus();
    return (0);
}