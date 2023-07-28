/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:00:27 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/28 12:32:00 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((i < len) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(i);
}	

/*#include <stdio.h>

int	main(void)
{
	const char	src[] = "Zelda";
	char		dest[20];

	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%s\n", dest);
	return (0);
}*/