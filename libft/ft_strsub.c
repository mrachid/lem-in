/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 13:32:31 by mrachid           #+#    #+#             */
/*   Updated: 2013/12/01 11:48:28 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = (char*)malloc((len + 1) * sizeof(char));
	if (s != NULL)
		ft_strncpy(tmp, s + start, len);
	tmp[len] = '\0';
	return (tmp);
	if (s == NULL)
		return (NULL);
}

