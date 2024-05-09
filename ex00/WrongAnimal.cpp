/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:59:06 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:07:09 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Unknown")
{ 
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
		
WrongAnimal::WrongAnimal(std::string const type) : type(type) 
{
	std::cout << type << " type WrongAnimal default constructor called" << std::endl;
} 

WrongAnimal::WrongAnimal(WrongAnimal const &wrong_animal_to_copy)
{
	*this = wrong_animal_to_copy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &wrong_animal_to_copy)
{
	if (this == &wrong_animal_to_copy)
		return (*this);
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "A generic sound of WrongAnimal..." << std::endl;
}

WrongAnimal::~WrongAnimal( void ) 
{
	std::cout << this->type << " type WrongAnimal default destructor called" << std::endl;
}