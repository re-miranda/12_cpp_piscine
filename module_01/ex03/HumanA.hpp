/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:07 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:16:56 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA( void );

        void    attack( void );

    private:
        std::string _name;
        Weapon      &_weapon;
};

#endif
