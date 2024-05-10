/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:51 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 16:02:36 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
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
