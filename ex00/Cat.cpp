/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:44 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:23:59 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{ 
	std::cout << "Cat default constructor called" << std::endl;
}
		
Cat::Cat(Cat const &cat_to_copy) : Animal(cat_to_copy.getType())
{
	*this = cat_to_copy;
}

Cat	&Cat::operator=(Cat const &Cat_to_copy)
{
	if (this == &Cat_to_copy)
		return (*this);
	return (*this);
}

Cat::~Cat( void )
{ 
	std::cout << "Cat default destructor called" << std::endl;
}

void  Cat::makeSound( void ) const
{
	std::cout << "Miau Miau😺!" << std::endl;
}