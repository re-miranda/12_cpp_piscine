/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:01 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:05:45 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  Zombie *zombieptr;

  randomChump("renato");
  zombieptr = newZombie("marcela");
  zombieptr->announce();
  delete (zombieptr);
  return (0);
}
