/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:10:32 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:10:33 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

MySed::~MySed(void) { return; }

MySed::MySed(std::string filename, std::string s1, std::string s2) {
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	infile.open(filename.c_str());
	if (infile.fail()) {
		std::cout << "Failed to open file: " << filename << std::endl;
		return ;
	}
	if (s1.compare(s2) == 0)
		return ;
	outfile.open((filename + ".replace").c_str());
	if (outfile.fail()) {
		std::cout << "Failed to create temporary file" << std::endl;
		return ;
	}
	while (std::getline(infile, line)) {
		while (line.find(s1, 0) != std::string::npos)
			this->my_replace(line, line.find(s1, 0), s1, s2);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return;
}

void	MySed::my_replace(std::string &line, size_t pos, std::string s1, std::string s2) {
	line.erase(pos, std::string(s1).length());
	line.insert(pos, s2);
	return ;
}
