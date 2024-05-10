/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:41 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 14:50:32 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class Animal
{
protected:
    std::string type;

public:
    Animal(void);
	Animal(const Animal& rhs);
	virtual ~Animal(void);
	Animal& operator=(const Animal& rhs);
	
	virtual void makeSound(void) const;
	std::string getType() const;
	void setType(std::string type);
};

#endif
