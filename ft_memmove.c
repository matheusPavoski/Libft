/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:11:46 by mpavoski          #+#    #+#             */
/*   Updated: 2023/08/04 11:08:26 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num_b)
{
	unsigned char		*dst;
	const unsigned char	*sorc;
	size_t				i;

	dst = (unsigned char *)dest;
	sorc = (const unsigned char *)src;
	i = 0;
	if (dst < sorc)
	{
		while (i < num_b)
		{
			dst[i] = sorc[i];
			i++;
		}
	}
	else if (dst > sorc)
	{
		i = num_b;
		while (i > 0)
		{
			dst[i - 1] = sorc[i - 1];
			i--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Salve, meu amigo!";
	char	dest[20];
	
	printf("%s\n", (char *)memmove(dest, src, 5));
	printf("%s\n", (char *)ft_memmove(dest, src, 5));
	return (0);
}*/