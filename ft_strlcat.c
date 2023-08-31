/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:34 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 18:57:36 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	if (size <= dst_l)
		return (src_l + size);
	while (src[i] != '\0' && (i + dst_l) < size - 1)
	{
		dst[i + dst_l] = src[i];
		i++;
	}
	dst[i + dst_l] = '\0';
	return (dst_l + src_l);
}
