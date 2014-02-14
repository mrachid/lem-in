/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:47:08 by mrachid           #+#    #+#             */
/*   Updated: 2014/01/13 15:04:20 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_isspace(int c)
{
	if ((c == ' ')
			|| (c == '\t')
			|| (c == '\n')
			|| (c == '\v')
			|| (c == '\f')
			|| (c == '\r'))
		return (1);
	return (0);
}

int					ft_atoi(const char *str)
{
	char			*ptr;
	int				i;
	int				neg;
	int				nb;

	ptr = (char*)str;
	i = 0;
	neg = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = - 1;
		i++;
	}
	while (ft_isdigit(str[i]))
		nb = nb * 10 + str[i++] - '0';
	return (nb * neg);
}

