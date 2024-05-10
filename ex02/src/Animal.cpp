/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:37 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 16:02:17 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << MAGENTA << "Animal default constructor" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs){
	std::cout << YELLOW << "Animal copy constructor		" << RESET << std::endl;
	*this = rhs;
}

AAnimal::~AAnimal(void){
	std::cout << RED << "Animal destroyed" << RESET << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	if(this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

void AAnimal::makeSound(void) const{
	std::cout << "Bonk!" << std::endl;
}

std::string AAnimal::getType() const{
	return type;
}

void AAnimal::setType(std::string _type){
	type = _type;
}