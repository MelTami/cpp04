/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:46 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/09 22:34:25 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
        Brain   *Brain;
public:
    Cat( void );
    Cat( Cat const & Cat_to_copy);
    Cat& operator=( Cat const & Cat_to_copy);
    ~ Cat( void );

    void makeSound( void ) const;
};

#endif
