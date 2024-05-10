/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:41 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:26:04 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal( void );
    Animal(std::string const type);
    Animal(Animal const &animal_to_copy);
    Animal& operator=(Animal const &animal_to_copy);
    virtual ~Animal( void );

    std::string getType( void ) const;
    virtual void makeSound( void ) const;
};

#endif
