/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:04 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/23 19:26:39 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr_mem, int val_to_exc, size_t num_b)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = ptr_mem;
	val = (unsigned char)val_to_exc;
	i = 0;
	while (i < num_b)
	{
		ptr[i] = val;
		i++;
	}
	return (ptr);
}
