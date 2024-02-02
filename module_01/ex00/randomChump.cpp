/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_chump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:25 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:04:18 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie stackZombie(name);
  stackZombie.announce();
  return;
}
