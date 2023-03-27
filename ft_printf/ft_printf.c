/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:29:59 by vpalacio          #+#    #+#             */
/*   Updated: 2023/03/27 15:28:09 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list ap, const char c)
{
	if (c == 'c')
		return (ft_printchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_printpntr(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_printunsigned(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printhexa(va_arg(ap, unsigned int), c));
	else if (c == '%')
		return (ft_printpct());
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		sum;

	i = 0;
	sum = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			sum += ft_check(args, str[i]);
			i++;
		}
		else
			sum += ft_printchar(str[i++]);
	}
	va_end(args);
	return (sum);
}
