/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:26:13 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/03 16:58:58 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ctua;
	unsigned char	cmia;
	size_t			i;

	i = 0;
	ctua = (unsigned char *) s;
	cmia = (unsigned char) c;
	while (i < n)
	{
		if (ctua[i] == cmia)
			return ((void *)&ctua[i]);
		i++;
	}
	return (NULL);
}
