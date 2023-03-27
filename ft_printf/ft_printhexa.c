/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:27:17 by vpalacio          #+#    #+#             */
/*   Updated: 2023/03/27 19:47:48 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lenght(unsigned int n)
{
	int	number;

	number = 0;
	while (n != 0)
	{
		number++;
		n = n / 16;
	}
	return (number);
}

static void	ft_puthexa(unsigned	int n, char pattern)
{
	if (n >= 16)
	{
		ft_puthexa(n / 16, pattern);
		ft_puthexa(n % 16, pattern);
	}
	else if (n > 9)
	{
		if (pattern == 'x')
			ft_putchar_fd((n - 10 + 'a'), 1);
		if (pattern == 'X')
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
	else
		ft_putchar_fd((n + '0'), 1);
}

int	ft_printhexa(unsigned int n, char pattern)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_puthexa(n, pattern);
	return (ft_lenght(n));
}
