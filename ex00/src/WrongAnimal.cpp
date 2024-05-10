/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:59:06 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:00:27 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << GREEN << "WrongAnimal Default constructor called" << RESET << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& rhs){
	std::cout << YELLOW << "WrongAnimal copied" << RESET << std::endl;
	*this = rhs;
};

WrongAnimal::~WrongAnimal(void){
	std::cout << RED << "WrongAnimal destroyed" << RESET << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	if(this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

void WrongAnimal::makeSound() const{
	std::cout << "* " << type << " makes a steel tube falling sound *" << std::endl;
};

std::string WrongAnimal::getType(void) const {
	return (type);
};