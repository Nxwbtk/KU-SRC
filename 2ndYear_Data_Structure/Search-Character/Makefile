# ********************************************************************************* #
#                                                                                   #
#                                                      :::     ::: :::     :::      #
#    Makefile                                         :+:    :+:  :+:     +:+       #
#                                                    +:+   +:+   +:+     +:+        #
#    By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+         #
#                                                  +#+ #+#     +#+     +#+          #
#    Created: 2022/08/05 17:04:43 by nxwbtk       #+#   #+#   +#+     +#+           #
#    Updated: 2022/08/05 17:04:45 by nxwbtk      ###     ###   ########.th          #
#                                                                                   #
# ********************************************************************************* #

NAME = sc_program

SRC = main.c ft_welcome.c ft_menu.c ft_goodbye.c ft_traverse.c ft_lstlast.c \
ft_lstnew.c ft_lstadd_back.c ft_search.c ft_lstdelete.c

CC = gcc

all: $(NAME)

$(NAME):
	@gcc $(SRC) -o $(NAME) && ./sc_program && make clean

clean:
	@rm -f $(NAME)

re: clean all

.PHONY: clean re all
