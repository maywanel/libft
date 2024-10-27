/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel.mes.1337@gamil.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:05:17 by moel-mes          #+#    #+#             */
/*   Updated: 2024/10/27 15:21:33 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n && d != s)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
