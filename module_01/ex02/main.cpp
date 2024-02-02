/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:30:48 by rmiranda          #+#    #+#             */
/*   Updated: 2024/02/01 19:30:49 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {
    std::string brain_str("HI THIS IS BRAIN");
    std::string *stringPTR = &brain_str;
    std::string &stringREF = brain_str;

    std::cout << &brain_str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << brain_str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
