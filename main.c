#include "obj_parser.h"

int		main(int ac, char **av)
{
	t_list	*obj;

	if (ac == 2)
	{
		obj = parse_obj(av[1]);
		obj++;
	}
	else
		ft_putendl("usage: ./obj_parser file.obj");
	return (0);
}