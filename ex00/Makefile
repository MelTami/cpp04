# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 20:52:03 by mvavasso          #+#    #+#              #
#    Updated: 2024/05/10 15:25:39 by mvavasso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Farm
ECHO=echo
YELLOW=\033[1;33m
GREEN=\033[1;32m
RED=\033[0;31m
RESET=\033[0m


SOURCES= $(addprefix ./src/,\
	main.cpp\
	Dog.cpp\
	Cat.cpp\
	Animal.cpp\
	WrongCat.cpp\
	WrongAnimal.cpp)

${NAME}: ${SOURCES}
	@${ECHO} "${YELLOW}Compiling $@...${RESET}"
	@c++ -Wall -Wextra -Werror -std=c++98 -I include ${SOURCES} -o $@
	@${ECHO} "${GREEN}Compiled!${RESET}"

fclean:
	@rm -fr ${NAME}
	@${ECHO} "${RED}Files removed!${RESET}"

re: fclean ${NAME}

.PHONY: fclean re