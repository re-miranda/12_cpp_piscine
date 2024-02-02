/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:14 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:16:17 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL) {
    return ;
}

HumanB::HumanB( std::string name, Weapon &weapon ): _name(name), _weapon(&weapon) {
    return ;
}

HumanB::~HumanB( void ) {
    return ;
}

void    HumanB::attack( void ) {
    if (this->_weapon == NULL)
        return ;
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
    return ;
}
