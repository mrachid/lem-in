/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:02:17 by mrachid           #+#    #+#             */
/*   Updated: 2013/12/01 10:57:11 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(const char *s);
void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

