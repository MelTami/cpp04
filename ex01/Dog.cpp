/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:48 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:26:18 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{ 
	std::cout << "Dog default constructor called" << std::endl; 
}

Dog::Dog(Dog const &dog_to_copy) : Animal(dog_to_copy.getType())
{
	*this = dog_to_copy;
}

Dog& Dog::operator=(Dog const &Dog_to_copy)
{
	if (this == &Dog_to_copy)
		return (*this);
	return (*this);
}

Dog::~Dog( void )
{ 
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Au Au🐶!!" << std::endl;
}
