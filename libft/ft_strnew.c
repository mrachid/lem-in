/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:06:37 by mrachid           #+#    #+#             */
/*   Updated: 2013/11/30 16:28:33 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char*)malloc((size + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	while (i <= size)
	{
		tmp[i] = 0;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

