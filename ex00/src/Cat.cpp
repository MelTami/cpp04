/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:44 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:00:15 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	setType("Cat");
	std::cout << GREEN  << type << " constructor called" << RESET << std::endl;
};

Cat::Cat(const Cat& rhs){
	std::cout << YELLOW << type << " copied" << RESET << std::endl;
	*this = rhs;
};

Cat::~Cat(void){
	std::cout << RED << type << " destroyed" << RESET << std::endl;
};

Cat& Cat::operator=(const Cat& rhs) {
	if(this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

void  Cat::makeSound( void ) const
{
	std::cout << "Miau Miau😺!" << std::endl;
}