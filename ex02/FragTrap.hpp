#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public :

        FragTrap( void );
        FragTrap( std::string name );
        FragTrap(const FragTrap& copy);
        ~FragTrap( void );
        FragTrap &operator=(const FragTrap& rhs);

        void highFivesGuys( void );
};

#endif