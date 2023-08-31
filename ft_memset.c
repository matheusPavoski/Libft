/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:04 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 03:06:25 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr_mem, int val_to_exc, size_t num_b)
{
	unsigned char	*ptr;
	unsigned char	val;

	ptr = (unsigned char *)ptr_mem;
	val = (unsigned char)val_to_exc;
	while (num_b--)
	{
		ptr[num_b] = val;
	}
	return (ptr);
}
