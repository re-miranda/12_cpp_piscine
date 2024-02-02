/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:10:15 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:10:16 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MySed.hpp"

int 	main( int argc, char **argv ) {
	if (argc != 4) {
		std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	MySed   MySed(argv[1], argv[2], argv[3]);
	return (0);
}
