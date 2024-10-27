/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel.mes.1337@gamil.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:51:00 by moel-mes          #+#    #+#             */
/*   Updated: 2024/10/27 11:49:37 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*str;
	unsigned char	byte;
	int				i;

	str = (unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == byte)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
