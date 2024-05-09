/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:23:23 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 21:23:25 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
    WrongCat( void );
    WrongCat( WrongCat const & WrongCat_to_copy);
    WrongCat& operator=( WrongCat const & WrongCat_to_copy);
    ~ WrongCat( void );

    void makeSound( void ) const;
};

#endif