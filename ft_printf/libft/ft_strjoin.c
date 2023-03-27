/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:52:12 by vpalacio          #+#    #+#             */
/*   Updated: 2023/02/07 18:40:44 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + (ft_strlen(s2))));
	if (!str)
		return (NULL);
	while (i < (int)ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j < (int)ft_strlen(s2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
