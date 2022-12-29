/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:25:56 by dimarque          #+#    #+#             */
/*   Updated: 2022/12/02 16:55:13 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_base(long long nbr, char *type);

int	ft_options(va_list ap, const char type);

int	ft_print_ptr(unsigned long long nbr, char *type);

int	ft_printchar(int c);

int	ft_printf(const char *s, ...);

int	ft_printnbr(int nbr);

int	ft_printstr(char *str);

#endif