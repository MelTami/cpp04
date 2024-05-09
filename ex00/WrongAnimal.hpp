/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:59:08 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:08:01 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal( void );
    WrongAnimal(std::string const type);
    WrongAnimal(WrongAnimal const &WrongAnimal_to_copy);
    WrongAnimal& operator=(WrongAnimal const &WrongAnimal_to_copy);
    virtual ~WrongAnimal( void );

    std::string getType( void ) const;
    void makeSound( void ) const;
};

#endif