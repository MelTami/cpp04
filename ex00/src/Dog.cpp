/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:48 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:00:23 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	setType("Dog");
	std::cout << GREEN << type << " constructor called" << RESET << std::endl;
};

Dog::Dog(const Dog& rhs){
	std::cout << YELLOW << type << " copied" << RESET << std::endl;
	*this = rhs;
};

Dog::~Dog(void){
	std::cout << RED << type << " destroyed" << RESET << std::endl;
};

Dog& Dog::operator=(const Dog& rhs) {
	if(this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

void Dog::makeSound( void ) const
{
	std::cout << "Au Au🐶!!" << std::endl;
}
