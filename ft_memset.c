/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel.mes.1337@gamil.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 06:28:48 by moel-mes          #+#    #+#             */
/*   Updated: 2024/10/27 15:54:52 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, int len)
{
	while (--len >= 0)
		*((unsigned char *)(b + len)) = (unsigned char)c;
	return (b);
}