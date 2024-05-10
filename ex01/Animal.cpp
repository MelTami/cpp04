/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:37 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:25:35 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Unknown")
{ 
	std::cout << "Animal default constructor called" << std::endl;
}
		
Animal::Animal(std::string const type) : type(type) 
{
	std::cout << type << " Type animal default constructor called" << std::endl;
} 

Animal::Animal(Animal const &animal_to_copy)
{
	*this = animal_to_copy;
}

Animal& Animal::operator=(Animal const &animal_to_copy)
{
	if (this == &animal_to_copy)
		return (*this);
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "An animal sound..." << std::endl;
}

Animal::~Animal( void ) 
{
	std::cout << this->type << " type animal default destructor called" << std::endl;
}