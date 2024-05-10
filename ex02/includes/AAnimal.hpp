/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:52:41 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 16:01:03 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"
#include "Colors.hpp"

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal& rhs);
		virtual ~AAnimal(void);
		AAnimal& operator=(const AAnimal& rhs);
		
		virtual void makeSound(void) const = 0;
		std::string getType() const;
		void setType(std::string type);
		virtual Brain* getBrain(void) const = 0;
};

#endif
