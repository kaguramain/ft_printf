/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:06:31 by vpalacio          #+#    #+#             */
/*   Updated: 2023/01/28 18:53:57 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	p;
	size_t	i;
	size_t	n;

	n = ft_strlen(s) + 1;
	i = 0;
	p = (char) c;
	while (i < n)
	{
		if (s[i] == p)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
