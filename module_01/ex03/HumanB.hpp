/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:19 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:16:51 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp" 
# include <iostream>

class HumanB {
    public:
        ~HumanB( void );
        HumanB( std::string name);
        HumanB( std::string name, Weapon &weapon);

        void    attack( void );
        void    setWeapon( Weapon &weapon );

    private:
        std::string _name;
        Weapon      *_weapon;
};

#endif
