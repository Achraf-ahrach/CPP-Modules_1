
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << name << ": has been destroyed." << std::endl;

}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}