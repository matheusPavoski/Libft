/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:48:00 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/08 13:48:06 by mmaschio         ###   ########.fr       */
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
	return (ft_strlen(src));
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