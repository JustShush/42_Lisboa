/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:14:03 by dimarque          #+#    #+#             */
/*   Updated: 2022/12/02 16:56:00 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(long long nbr, char *type)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (type[j])
		j++;
	if (nbr < 0)
	{
		i += ft_printchar('-');
		nbr *= -1;
	}
	if (nbr >= j)
		i += ft_base((nbr / j), type);
	return (i + ft_printchar(type[nbr % j]));
}
