/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:34 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 20:28:57 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	dest_l;
	size_t	src_l;
	size_t	i;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	i = 0;
	if (len <= dest_l)
		return (src_l + len);
	while (src[i] != '\0' && (i + dest_l) < len - 1)
	{
		dest[i + dest_l] = src[i];
		i++;
	}
	dest[i + dest_l] = '\0';
	return (dest_l + src_l);
}
