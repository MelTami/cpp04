/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:44 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:46:46 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	setType("Cat");
	std::cout << GREEN << type << " default constructor" << RESET << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& rhs){
	brain = new Brain();
	*this = rhs;
	std::cout << YELLOW << type << " copy constructor" << RESET << std::endl;
}

Cat::~Cat(void){
	delete brain;
	std::cout << RED << type << " destructor" << RESET << std::endl;
}

void  Cat::makeSound( void ) const
{
	std::cout << "Miau Miau😺!" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	if(this != &rhs) {
		type = rhs.type;
		*brain = *(rhs.brain);
	}
	std::cout << YELLOW << type << " copy operator" << RESET << std::endl;
	return *this;
}

Brain* Cat::getBrain(void) const {
	return brain;;
}
