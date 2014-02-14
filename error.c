/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 16:43:15 by mrachid           #+#    #+#             */
/*   Updated: 2014/02/14 18:09:45 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fichier pour error .. ajouter boolen pour si erreur afficher sois on arrete
 * l'acquisition des donner et on essaye de trouver un chemin si cela est possible
 * afficher la carte enregistrer sinon renvoyer une error
 */
#include <libft.h>
#include <stdio.h>
#include "lemin.h"

int		strcmp_char(char s1, char s2)
{

	if (s1 == s2)
		return (1);
	else
		return (0);
}

char		**ft_error(char **str)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (ft_strcmp(str[i], "##start") == 0)
		{
			if (strcmp_char(str[i + 1][0], 'L') == 1 || strcmp_char(str[i + 1][0], '#') == 1)
				perror("error");
		}
		else if (ft_strcmp(str[i], "##end") == 0)
		{
			if (strcmp_char(str[i + 1][0], 'L') == 1 || strcmp_char(str[i + 1][0], '#') == 1)
				perror("error");
		}
	}
	return (str);
}
