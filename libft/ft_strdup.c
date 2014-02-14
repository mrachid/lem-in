/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:31:01 by mrachid           #+#    #+#             */
/*   Updated: 2013/12/01 11:45:13 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *s1, const char *s2);

char		*ft_strdup(const char *s1)
{
	char	*str;

	str = (char*)malloc(ft_strlen(s1)*sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		ft_strcpy(str, s1);
	return (str);
}

