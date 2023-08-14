/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:04 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:08:07 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr_mem, int val_to_exc, size_t num_b)
{
	unsigned char	*ptr;
	unsigned char	ptrv;
	size_t			i;

	ptr = ptr_mem;
	ptrv = (unsigned char)val_to_exc;
	i = 0;
	while (i < num_b)
	{
		ptr[i] = ptrv;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Ogro Feliz";
	printf("%s\n", (char *)ft_memset(str, '0', 10));
	printf("%s\n", (char *)memset(str, 'b', 10));
	return (0);
}*/