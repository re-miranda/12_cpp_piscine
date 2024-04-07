/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:30:24 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 19:34:56 by rmiranda         ###   ########.fr       */
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
  void setName(std::string name);

private:
  std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
