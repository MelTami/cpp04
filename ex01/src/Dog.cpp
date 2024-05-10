/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:48 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:46:58 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	setType("Dog");
	std::cout << GREEN << type << " default constructor" << RESET << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& rhs){
	brain = new Brain();
	*this = rhs;
	std::cout << YELLOW << type << " copy constructor" << RESET << std::endl;
}

Dog::~Dog(void){
	delete brain;
	std::cout << RED << type << " destructor" << RESET << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Au Au🐶!" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	if(this != &rhs) {
		type = rhs.type;
		*brain = *(rhs.brain);
	}
	std::cout << YELLOW << type << " copy operator" << RESET << std::endl;
	return *this;
}

Brain* Dog::getBrain(void) const {
	return brain;;
}