#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/08/29 21:32:58 by wescande          #+#    #+#             *#
#*   Updated: 2016/12/24 02:14:21 by wescande         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME		=	Colleen


CC			=	go build
OBJ_DIR		=	objs/

all :
	@$(MAKE) -j $(NAME)

$(NAME) :		Makefile
	@go build $(NAME).go
	@printf "\r\033[38;5;117m✓ MAKE $(NAME)\033[0m\033[K\n"

clean :
	@$(eval a=$(shell find . -name "Sully_*"))
	@if [ ! -z "$a" ]; \
	then \
		rm -rf $a; \
		printf "\r\033[38;5;202m✗ clean $a.\033[0m\033[K\n"; \
	fi

fclean :		clean
	@rm -rf $(NAME);
	@printf "\r\033[38;5;196m✗ fclean $(NAME).\033[0m\033[K\n";

re :			fclean all

.PHONY :		fclean clean re

-include $(OBJS:.o=.d)
