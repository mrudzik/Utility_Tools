
NAME = ut_create_cpp_class

SRC_DIR :=	./src/
OBJ_DIR :=	./obj/
INC_DIR :=	./inc/
# LIB_DIR :=	./Library/

SRC = 	main.cpp	\
		CreateCppFile.cpp
		

#	project object files
OBJ =		$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

INCLUDES	=	-I $(INC_DIR)\
				
CC_FLAGS := -Wall -Wextra -Werror -O3
CC = clang++
all:
	make $(NAME)

# compiles .c files
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(INCLUDES) #-g -fsanitize=address
	@ echo "\n===> $(NAME) compiled\n"

#compiles .o files
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) -c $< -o $@ $(CC_FLAGS) $(HEADER_FLAGS) $(INCLUDES)

clean:
	# make clean -C $(LIBFT_DIR)
	/bin/rm -f $(OBJ)

fclean: clean
	# make fclean -C $(LIBFT_DIR)
	/bin/rm -f $(NAME)

re: fclean all

vpath %.cpp $(SRC_DIR)