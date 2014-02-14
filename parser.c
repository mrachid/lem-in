/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 08:37:49 by mrachid           #+#    #+#             */
/*   Updated: 2014/02/14 17:41:20 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "lemin.h"

void		ft_parser(char **str)
{
	int		i;
	int		j;
	t_gps		gps;

	i = 0;
	j = 0;
	gps.fmz = ft_atoi(str[i]);
	while (str[i] != '\0')
	{
		if (ft_strcmp(str[i], "##start") == 0)
			gps.start = ft_atoi(str[i + 1]);
		else if (ft_strcmp(str[i], "##end") == 0)
			gps.end = ft_atoi(str[i + 1]);
		ft_putendl(str[i]);
		i++;
	}
	ft_putstr("\n\n\n");
	ft_putstr("\nnombre fourmis : ");
	ft_putnbr(gps.fmz);
	ft_putstr("\nstart : ");
	ft_putnbr(gps.start);
	ft_putstr("\nend : ");
	ft_putnbr(gps.end);
}
