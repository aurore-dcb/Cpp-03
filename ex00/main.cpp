#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Paul");
    ClapTrap clap2("Pierre");
    ClapTrap clap3(clap);

    clap.attack("Pierre");
    return (0);
}