/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:11:55 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:11:56 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	this->levels_string_array[DEBUG] = "DEBUG";
	this->levels_string_array[INFO] = "INFO";
	this->levels_string_array[WARNING] = "WARNING";
	this->levels_string_array[ERROR] = "ERROR";
	return ;
}

Harl::~Harl(void) { return; }

void	Harl::debug(void) {
	std::cout << "Debug" << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << "Info" << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << "Warning" << std::endl;
	return ;
}

void	Harl::error(void) {
	std::cout << "Error" << std::endl;
	return ;
}

int	Harl::levelResolver(std::string level) {
	int index = 0;

	while (level != levels_string_array[index] && index < LEVEL_MAX)
		index++;
	return (index);
}

void	Harl::complain(std::string input) {
	switch (this->levelResolver(input)) {
		case DEBUG:
				this->debug();
				// Intentional fall through
		case INFO:
				this->info();
				// Intentional fall through
		case WARNING:
				this->warning();
				// Intentional fall through
		case ERROR:
				this->error();
				break;
		default:
			std::cout << "No complaints!" << std::endl;
	}
	return ;
}
