/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:49 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:08:51 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Bom dia, dev!";


	printf("%ld\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
	return (0);
}*/