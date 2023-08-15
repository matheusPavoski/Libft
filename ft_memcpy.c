/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:07:47 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 20:27:56 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num_b)
{
	unsigned char		*dst;
	const unsigned char	*sorc;
	size_t				i;

	dst = (unsigned char *)dest;
	sorc = (const unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL && num_b > 0)
		return (NULL);
	while (i < num_b)
	{
		dst[i] = sorc[i];
		i++;
	}
	return (dst);
}
