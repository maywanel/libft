/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel.mes.1337@gamil.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:37:57 by moel-mes          #+#    #+#             */
/*   Updated: 2024/10/27 15:44:46 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;
	void	*content;

	new_lst = NULL;
	while (lst && f && del)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		elem = ft_lstnew(content);
		if (!elem)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
