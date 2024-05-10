/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:23:33 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:00:29 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << GREEN << "WrongCat Default constructor called" << RESET << std::endl;
}
WrongCat::WrongCat(const WrongCat& rhs){
	std::cout << YELLOW << "WrongCat copied" << RESET << std::endl;
	*this = rhs;
};
WrongCat::~WrongCat(void){
	std::cout << RED << "WrongCat destroyed" << RESET << std::endl;
};
WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	if(this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

void  WrongCat::makeSound( void ) const
{
	std::cout << RED << "Miau Miau😺!" << std::endl;
}