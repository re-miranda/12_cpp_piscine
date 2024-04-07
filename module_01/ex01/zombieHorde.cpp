/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:30:28 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 19:33:40 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
    Zombie *retvalue = new Zombie[N];

    for (int it = 0; it < N; it++)
        retvalue[it].setName(name);
    return (retvalue);
}
