/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:11:59 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 20:12:00 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3
# define LEVEL_MAX 4

class	Harl {
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string);
	
	private:
		std::string levels_string_array[LEVEL_MAX];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		int levelResolver(std::string level);
};

#endif
