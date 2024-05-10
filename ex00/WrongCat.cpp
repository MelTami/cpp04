/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:23:33 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 22:40:04 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{ 
	std::cout << "WrongCat default constructor called" << std::endl;
}
		
WrongCat::WrongCat(WrongCat const &wrongcat_to_copy) : WrongAnimal(wrongcat_to_copy.getType())
{
	*this = wrongcat_to_copy;
}

WrongCat	&WrongCat::operator=(WrongCat const &wrongCat_to_copy)
{
	if (this == &wrongCat_to_copy)
		return (*this);
	return (*this);
}

WrongCat::~WrongCat( void )
{ 
	std::cout << "WrongCat default destructor called" << std::endl;
}

void  WrongCat::makeSound( void ) const
{
	std::cout << "Miau Miau😺!" << std::endl;
}