/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:01:07 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/10 15:44:03 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout <<"Brain default constuctor" << std::endl;
	for (unsigned int i = 0; i < 100; i++) {
		ideas[i] = "Lick";
	}
}

Brain::Brain(const Brain& rhs){
	std::cout << "Brain copy constructor" << std::endl;
	*this = rhs;
}

Brain::~Brain(void){
	std::cout << RED << "Brain default destructor" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
	std::cout << "Brain copy operator" << std::endl;
	if(this != &rhs) {
		for (unsigned int i = 0; i < 100; i++){
			setIdea(i, rhs.ideas[i]);
		}
	}
	return *this;
}

void Brain::setIdea(unsigned int i, std::string idea) {
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Idea index out of range" << std::endl;
}

std::string Brain::getIdea(unsigned int i) const {
	return this->ideas[i];
}