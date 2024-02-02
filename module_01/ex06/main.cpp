/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:12:05 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:12:06 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " {LEVEL}" << std::endl;
		return (1);
	}
	Harl	harlzinho;
	harlzinho.complain(argv[1]);
	return (0);
}
