/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:07:26 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 20:27:39 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val_b, size_t num_b)
{
	const unsigned char		*str;
	unsigned char			val;
	size_t					i;

	str = (const unsigned char *)ptr;
	val = val_b;
	i = 0;
	while (i < num_b)
	{
		if (str[i] == val)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
