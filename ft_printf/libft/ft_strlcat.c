/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:21:04 by vpalacio          #+#    #+#             */
/*   Updated: 2023/01/31 17:35:43 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	if (!dst && !size)
		return (0);
	while (dst[i] && i < size)
		i++;
	while (src[p] && (i + p + 1) < size)
	{
		dst[i + p] = src[p];
		p++;
	}
	if (i < size)
		dst[i + p] = '\0';
	return (i + ft_strlen(src));
}
