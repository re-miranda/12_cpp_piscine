/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:41 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 19:29:42 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
  Zombie(void);
  Zombie(std::string name);
  ~Zombie(void);

  void announce(void) const;

private:
  std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
