/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:01:41 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/03 17:38:55 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*ass;
	const char		*gina;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	ass = (char *) dst;
	gina = (const char *) src;
	while (i < n)
	{
		ass[i] = gina[i];
		i++;
	}		
	return ((void *)ass);
}
