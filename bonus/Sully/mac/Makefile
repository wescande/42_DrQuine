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

NAME		=	Sully

# BUILDS		=
# Colleen\
# Grace\
# Sully

CC			=	go build
# FLAGS		=	-Wall -Wextra -Werror -O3

# LEN_NAME	=	`printf "%s" $(NAME) |wc -c`
# DELTA		=	$$(echo "$$(tput cols)-31-$(LEN_NAME)"|bc)

# SRC_DIR		=	srcs/
# INC_DIR		=	includes/
OBJ_DIR		=	objs/

# SRC_BASE	=	$(addsuffix .c, $(BUILDS))

# SRCS		=	$(addprefix $(SRC_DIR), $(SRC_BASE))
# OBJS		=	$(addprefix $(OBJ_DIR), $(SRC_BASE:.c=.o))
# NB			=	$(words $(SRC_BASE))
# INDEX		=	0

# SHELL := /bin/bash

all :
	@$(MAKE) -j $(NAME)

$(NAME) :		Makefile
	@go build $(NAME).go
	@printf "\r\033[38;5;117m✓ MAKE $(NAME)\033[0m\033[K\n"

# $(OBJ_DIR) :
# 	@mkdir -p $(OBJ_DIR)
# 	@mkdir -p $(dir $(OBJS))

# %: $(SRC_DIR)%.c Makefile | $(OBJ_DIR)
# 	@$(CC) $(FLAGS) $< -o $@
# 	@printf "\r\033[38;5;117m✓ MAKE $@\033[0m\033[K\n"

# $(OBJ_DIR)%.o:	$(SRC_DIR)%.c Makefile | $(OBJ_DIR)
# 	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
# 	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
# 	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
# 	@$(eval COLOR=$(shell list=(160 196 202 208 215 221 226 227 190 154 118 82 46); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
# 	@printf "\r\033[38;5;%dm⌛ [%s]: %2d%% `printf '█%.0s' {0..$(DONE)}`%*s❙%*.*s\033[0m\033[K" $(COLOR) $(NAME) $(PERCENT) $(TO_DO) "" $(DELTA) $(DELTA) "$(shell echo "$@" | sed 's/^.*\///')"
# 	@$(CC) $(FLAGS) -MMD -c $< -o $@
# 	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

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
