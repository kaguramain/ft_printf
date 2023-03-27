/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:20:57 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/11 20:38:48 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newbi;
	t_list	*newone;

	newbi = NULL;
	while (lst != NULL)
	{
		newone = ft_lstnew(f(lst->content));
		if (!newone)
		{
			ft_lstclear(&newbi, del);
			return (NULL);
		}
		ft_lstadd_back(&newbi, newone);
		lst = lst->next;
	}
	return (newbi);
}
