NAME = Test1

OBJ = $(NAME).o

all:
	@nasm -f elf64 -o $(OBJ) $(NAME).asm
	@ld -o $(NAME) $(OBJ)

fclean:
	@rm -f $(NAME) $(OBJ)

gdb:
	@gdb $(NAME)
