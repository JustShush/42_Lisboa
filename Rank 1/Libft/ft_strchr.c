/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:34:42 by dimarque          #+#    #+#             */
/*   Updated: 2022/11/10 15:33:12 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char )c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

/* int main()
{

	char *str;
	str = "https.//mdinis.pt";

	printf("%s", ft_strchr(str, '.'));
	return 0;
} */