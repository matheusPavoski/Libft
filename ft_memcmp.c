/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:07:34 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:07:39 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num_b)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *) ptr1;
	str2 = (const unsigned char *) ptr2;
	i = 0;
	while (i < num_b)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const unsigned char	str1[] = "It's a me, Mario!";
	const unsigned char	str2[] = "It's a me, Mario!";
	size_t				num_b = 17;

	printf("%d\n", ft_memcmp(str1, str2, num_b));
	printf("%d\n", memcmp(str1, str2, num_b));
	return (0);
}*/
