/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel.mes.1337@gamil.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:26:58 by moel-mes          #+#    #+#             */
/*   Updated: 2024/10/25 06:50:48 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen((char *)src);
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
