/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:46 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 16:02:29 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
{
    private:
        Brain*   brain;
	public:
		Cat(void);
		Cat(const Cat& rhs);
		~Cat(void);
		Cat& operator=(const Cat& rhs);

		virtual void makeSound(void) const;
		Brain* getBrain(void) const;
};

#endif
