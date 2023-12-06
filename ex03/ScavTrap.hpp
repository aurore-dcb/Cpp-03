#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

    public :

        ScavTrap( void );
        ScavTrap( std::string name );
        ~ScavTrap( void );
        ScavTrap( const ScavTrap& copy );
        ScavTrap& operator=(const ScavTrap& rhs);

        void displayStatus( void ) const;

        void attack(const std::string& target);
        void guardGate( void );
};

#endif