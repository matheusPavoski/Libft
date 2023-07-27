/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:23:38 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/27 10:02:40 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr_m, size_t num_b)
{
	unsigned char *ptr;
	size_t i;

	ptr = ptr_m;
	i = 0;
	while (i < num_b)
	{
		ptr[i] = '0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "The Legeend of Zelda";

	printf("Antes: %s\n", str);
	ft_bzero(str, 6);
	printf("Depois: %s\n", str);
	return (0);
}*/