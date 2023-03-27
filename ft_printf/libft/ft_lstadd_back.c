/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:03:45 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/10 15:34:03 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*matt;

	if (!lst)
		return ;
	if (*lst)
	{
		matt = ft_lstlast(*lst);
		matt -> next = new;
	}
	else
		*lst = new;
}
