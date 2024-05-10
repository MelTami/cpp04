/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:37 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:00:03 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() {
	std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
};
Animal::Animal(const Animal& rhs){
	std::cout << YELLOW << "Animal copied" << RESET << std::endl;
	*this = rhs;
};
Animal::~Animal(void){
	std::cout << RED << "Animal destroyed" << RESET << std::endl;
};
Animal& Animal::operator=(const Animal& rhs) {
	if(this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

void Animal::makeSound(void) const{
	std::cout << "Bonk!" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

void Animal::setType(std::string _type){
	type = _type;
}