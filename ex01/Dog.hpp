/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:51 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:26:26 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
public:
    Dog( void );
    Dog(Dog const &Dog_to_copy);
    Dog& operator=(Dog const &Dog_to_copy);
    ~Dog( void );

    void makeSound( void ) const;
};

#endif
