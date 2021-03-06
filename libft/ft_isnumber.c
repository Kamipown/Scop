/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <pdelobbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:11:24 by pdelobbe          #+#    #+#             */
/*   Updated: 2016/08/17 19:16:46 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnumber(char *s)
{
	if (*s && (*s == '-' || *s == '+'))
		++s;
	while (*s)
	{
		if (!(*s >= '0' && *s <= 9))
			return (0);
		++s;
	}
	return (1);
}
