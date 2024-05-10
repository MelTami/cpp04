/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:01:05 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:40:12 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Colors.hpp"
#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& rhs);
		~Brain(void);
		Brain& operator=(const Brain& rhs);
		
		void setIdea(unsigned int i, std::string Idea);
		std::string getIdea(unsigned int i) const;
};

#endif