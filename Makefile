all:
	gcc -Wall -Wextra -Werror main.c obj_parser.c array_3dv.c array_2dp.c ft_atod.c libft/libft.a -I./libft/includes -o obj_parser

clean:
	rm -f obj_parser

re: clean all
