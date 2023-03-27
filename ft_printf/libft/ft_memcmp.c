/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:31:32 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/03 16:59:49 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pet;
	unsigned char	*cat;
	size_t			i;

	i = 0;
	pet = (unsigned char *) s1;
	cat = (unsigned char *) s2;
	while (i < n)
	{
		if (pet[i] == cat[i])
			i++;
		else
			return (pet[i] - cat[i]);
	}
	return (0);
}
