/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:36 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:15:10 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ): _type() {
    return ;
}

Weapon::Weapon( std::string type): _type(type) {
    return ;
}

Weapon::~Weapon( void ) {
    return ;
}

std::string Weapon::getType( void ) {
    return (this->_type);
}

void Weapon::setType( std::string input ) {
    this->_type = input;
    return ;
}
