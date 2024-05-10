/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:51 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:41:23 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog& rhs);
		~Dog(void);
		Dog& operator=(const Dog& rhs);
		void makeSound(void)const;
		Brain* getBrain(void) const;
};

#endif
