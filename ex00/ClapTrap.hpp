#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define GRAY        "\033[90m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLACK       "\033[30m"
#define RESET_COLOR "\033[0m"

class ClapTrap {

    public :

        ClapTrap( void );
        ClapTrap( std::string name );
        ~ClapTrap( void );
        ClapTrap( const ClapTrap& copy );

        ClapTrap& operator=(const ClapTrap& rhs);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName( void ) const ;
        int         getHitPts( void ) const;
        int         getEnergyPts( void ) const;
        int         getAttackDmg( void ) const;

        void        displayStatus( void ) const;

    private :

        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

};

#endif