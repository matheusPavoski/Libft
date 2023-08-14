/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:43 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:05:48 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr_m, size_t num_b)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = ptr_m;
	i = 0;
	while (i < num_b)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "The Legend of Zelda";

	printf("Antes: %s\n", str);
	ft_bzero(str, 19);
	printf("Depois: %s\n", str);
	return (0);
}*/