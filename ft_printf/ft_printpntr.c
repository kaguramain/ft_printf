/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:11:16 by vpalacio          #+#    #+#             */
/*   Updated: 2023/03/27 15:16:46 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrlenght(unsigned long long nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		count++;
		nb = nb / 16;
	}
	return (count);
}

static void	ft_putpointer(unsigned long long n)
{
	if (n >= 16)
	{
		ft_putpointer(n / 16);
		ft_putpointer(n % 16);
	}
	else if (n > 9)
		ft_putchar_fd((n - 10 + 'a'), 1);
	else
		ft_putchar_fd((n + '0'), 1);
}

int	ft_printpntr(void *ptr)
{
	int					i;
	unsigned long long	j;

	i = 0;
	j = (unsigned long long) ptr;
	i += write(1, "0x", 2);
	if (ptr == 0)
		i += write(1, "0", 1);
	else
	{
		ft_putpointer(j);
		i += ft_ptrlenght(j);
	}
	return (i);
}
