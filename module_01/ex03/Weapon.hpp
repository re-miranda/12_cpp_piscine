/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:59 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:15:19 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
    public:
        ~Weapon( void );
        Weapon( void );
        Weapon( std::string type );

        std::string getType( void );
        void        setType( std::string input );

    private:
        std::string _type;
};
#endif
