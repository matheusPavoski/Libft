/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:07:26 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 18:29:35 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	unsigned char			val;
	size_t					i;

	str = (const unsigned char *)s;
	val = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == val)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
