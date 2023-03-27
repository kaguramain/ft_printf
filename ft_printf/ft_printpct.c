/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:29:10 by vpalacio          #+#    #+#             */
/*   Updated: 2023/03/27 18:54:49 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	j;

	j = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[j])
		j += write(1, &str[j], 1);
	return (j);
}

int	ft_printnbr(int n)
{
	int		i;
	char	*number;

	number = ft_itoa(n);
	i = ft_printstr(number);
	free(number);
	return (i);
}

int	ft_printpct(void)
{
	return (write(1, "%", 1));
}

int	ft_printchar(int s)
{
	return (write(1, &s, 1));
}
