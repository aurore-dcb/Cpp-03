#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

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