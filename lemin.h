/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 09:16:12 by mrachid           #+#    #+#             */
/*   Updated: 2014/02/14 17:28:15 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

typedef struct		s_gps
{
	int		start;
	int		end;
	int		fmz;
	char		*room;
}			t_gps;

int		strcmp_char(char s1, char s2);
char		**ft_error(char **str);
void		ft_parser(char **str);

#endif /* !LEMIN_H */
