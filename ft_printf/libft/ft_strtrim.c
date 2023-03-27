/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:53:08 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/07 18:38:54 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*strcast;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_memchr(set, s1[i], ft_strlen(set)))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_memchr(set, s1[j], ft_strlen(set)))
		j--;
	strcast = (char *)malloc((j - i + 2) * sizeof(char));
	if (!strcast)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		strcast[k++] = s1[i];
		i++;
	}
	strcast[k] = '\0';
	return (strcast);
}
