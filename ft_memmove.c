/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:07:56 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 18:32:49 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sorc;
	size_t				i;

	dst = (unsigned char *)dest;
	sorc = (const unsigned char *)src;
	i = 0;
	if (dst < sorc)
	{
		while (i < n)
		{
			dst[i] = sorc[i];
			i++;
		}
	}
	else if (dst > sorc)
	{
		i = n;
		while (i > 0)
		{
			dst[i - 1] = sorc[i - 1];
			i--;
		}
	}
	return (dest);
}
