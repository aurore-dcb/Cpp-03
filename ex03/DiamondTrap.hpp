#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {

    public :
        
        DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap( const DiamondTrap& copy );
        DiamondTrap &operator=( const DiamondTrap& rhs );
        ~DiamondTrap( void );

        void setHitPoints( void );
        void whoAmI( void );
        
        void displayStatus( void ) const ;

    private :

        std::string _name;
};

#endif