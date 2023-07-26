/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:01:46 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/26 08:01:54 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlen(char *str)
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