/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:31:54 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/28 14:54:08 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	dest_l;
	size_t	src_l;
	size_t	i;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	i = 0;
	if(dest_l >= len)
		return (dest_l + src_l);
	while (i < len && dest[i] != '\0')
	{
		dest[i + dest_l] = src[i];
		i++;	
	}	
	dest[i + dest_l] = '\0';
	return (dest_l+ src_l);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[30] = "Hello, ";
	const char src[] = "World!";
	
	printf("%ld\n", ft_strlcat(dest, src, 10));
	return(0);
}*/