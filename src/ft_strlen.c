/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:22:36 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/25 15:46:14 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlen (char *str)
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