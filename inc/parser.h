#ifndef PARSER_H
# define PARSER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include "libft.h"
# include "types.h"

typedef struct	s_face
{
	t_3dvertex	v1;
	t_2dpair	vt1;
	t_3dvertex	vn1;
	t_3dvertex	v2;
	t_2dpair	vt2;
	t_3dvertex	vn2;
	t_3dvertex	v3;
	t_2dpair	vt3;
	t_3dvertex	vn3;
}				t_face;

typedef struct	s_array_2dp
{
	t_2dpair	*p;
	size_t		used;
	size_t		size;
}				t_array_2dp;

typedef struct	s_array_3dv
{
	t_3dvertex	*v;
	size_t		used;
	size_t		size;
}				t_array_3dv;

t_list			*parse_obj(const char *path);

t_bool			init_array_2dp(t_array_2dp *array, const size_t initial_size);
t_bool			insert_array_2dp(t_array_2dp *array, const t_2dpair pair);
void			free_array_2dp(t_array_2dp *array);

t_bool			init_array_3dv(t_array_3dv *array, const size_t initial_size);
t_bool			insert_array_3dv(t_array_3dv *array, const t_3dvertex vertex);
void			free_array_3dv(t_array_3dv *array);

#endif
