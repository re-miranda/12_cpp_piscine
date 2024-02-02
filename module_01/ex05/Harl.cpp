/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:11:00 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:11:01 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::~Harl(void) { return; }

Harl::Harl(void) {
	this->levels_array[DEBUG] = &Harl::debug;
	this->levels_array[INFO] = &Harl::info;
	this->levels_array[WARNING] = &Harl::warning;
	this->levels_array[ERROR] = &Harl::error;
	this->levels_string_array[DEBUG] = "DEBUG";
	this->levels_string_array[INFO] = "INFO";
	this->levels_string_array[WARNING] = "WARNING";
	this->levels_string_array[ERROR] = "ERROR";
	return ;
}

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

void	Harl::complain(std::string input) {
	int index = 0;

	while (index < LEVEL_MAX) {
		if (input == this->levels_string_array[index]) {
			(this->*levels_array[index])();
			return;
		}
		index++;
	}
	std::cout << "No complaints!" << std::endl;
	return ;
}
