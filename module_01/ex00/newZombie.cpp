/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_zombie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:19 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:05:24 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) { return (new Zombie(name)); }
