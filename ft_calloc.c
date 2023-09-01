/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:06:15 by mmaschio          #+#    #+#             */
/*   Updated: 2023/09/01 01:30:34 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
