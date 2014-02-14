/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 20:50:20 by mrachid           #+#    #+#             */
/*   Updated: 2014/02/14 17:48:27 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <fcntl.h>
#include "lemin.h"

int		main(int ac, char **av)
{
	char		*line;
	char		**str;
	int		fd;
	int		i;

	i = 0;
	str =  (char **)malloc(sizeof(char *) * 100);
	fd = open(av[1], O_RDONLY);
	if (ac == 2)
	{
		while (get_next_line(fd, &line) > 0)
		{
			str[i] = (char *)malloc(sizeof(char) * ft_strlen(line));
			str[i] = line;
			i++;
		}
	str = ft_error(str);
	ft_parser(str);
	}
	return (0);
}
/*
**	passer en list pour eviter le malloc et la limite du malloc "100"
**	chiffre arbitraire
*/

