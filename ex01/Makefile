# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 18:51:13 by albgonza          #+#    #+#              #
#    Updated: 2023/06/16 19:42:33 by albgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	\
			Contact.hpp \
			PhoneBook.hpp \
			ft_phone.cpp \

OBJS		=	$(SRCS:.cpp=.o)
NAME		=	ft_phonebook
CC			=	g++
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

all:	$(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@
		
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
