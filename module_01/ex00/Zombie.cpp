/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:33 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 19:29:33 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ): _name() {
    return ;
}

Zombie::Zombie( std::string name ): _name( name ) {
    return ;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << ": destroyed" << std::endl;
    return ;
}

void    Zombie::announce( void ) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
