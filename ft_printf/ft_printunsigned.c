/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:18:12 by vpalacio          #+#    #+#             */
/*   Updated: 2023/03/27 15:21:14 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_getunsigned(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_getitoa_unsigned(unsigned int n)
{
	char	*str;
	int		i;

	str = NULL;
	i = ft_getunsigned(n);
	str = malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

int	ft_printunsigned(unsigned int n)
{
	int		len;
	char	*number;

	if (n == 0)
		return (write(1, "0", 1));
	number = ft_getitoa_unsigned(n);
	len = ft_printstr(number);
	free(number);
	return (len);
}
