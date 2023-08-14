/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:46:32 by mpavoski          #+#    #+#             */
/*   Updated: 2023/08/14 16:00:16 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char str[] = "Oi, Mundo!";
	
	printf("%s\n", ft_strchr(str, ' '));
	printf("%s\n", strchr(str, ' '));
	return (0);
}*/