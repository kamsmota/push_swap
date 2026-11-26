/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 17:13:26 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/15 17:13:26 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printp(void *pt);
int	ft_choice(char c, va_list *ap);
int	ft_conversion(unsigned long nbr, unsigned long i, const char *str);
int	ft_printc(char c);
int	ft_printnbr(long i);
int	ft_printf(const char *str, ...);
int	ft_printstr(char *str);
int	ft_countdigits(unsigned long n, unsigned long nbr);

#endif