/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalacio <vpalacio@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:29:18 by vpalacio          #+#    #+#             */
/*   Updated: 2023/03/27 15:31:05 by vpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printpct(void);
int		ft_printnbr(int n);
int		ft_printchar(int s);
int		ft_printstr(char *str);
int		ft_printhexa(unsigned int n, char pattern);
int		ft_printpntr(void *ptr);
int		ft_printunsigned(unsigned int n);

#endif