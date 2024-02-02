/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:02 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:16:29 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon) {
    return ;
}

HumanA::~HumanA( void ) {
    return ;
}

void    HumanA::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}
