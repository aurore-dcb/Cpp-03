#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Paul");
    ClapTrap copy(clap);
    ClapTrap neww = ClapTrap();

    neww = clap;

    std::cout << std::endl << RED << "--- copy and neww ---" << std::endl << RESET_COLOR;
    copy.attack("Pierre");
    copy.attack("Pierre");
    copy.displayStatus();
    neww.attack("Pierre");
    neww.displayStatus();

    std::cout << RED << std::endl << "--- clap ---" << std::endl << RESET_COLOR;
    clap.displayStatus();
    std::cout << std::endl;
    clap.beRepaired(5);
    clap.displayStatus();
    clap.attack("Pierre");
    clap.displayStatus();

    clap.takeDamage(50);
    clap.displayStatus();
    for (int i = 0; i < 8 ; i++) {
        clap.beRepaired(10);
        // clap.displayStatus();
    }
    clap.displayStatus();
    clap.attack("Pierre");
    clap.takeDamage(50);
    clap.displayStatus();
    std::cout << std::endl;
    return (0);
}
