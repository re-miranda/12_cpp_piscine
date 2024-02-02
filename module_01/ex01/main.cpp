/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:30:02 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 19:42:16 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  Zombie *horde;

  horde = zombieHorde(5, "Lucca");
  for (int it = 0; it < 5; it++)
    horde[it].announce();
  delete[] (horde);
  return (0);
}
