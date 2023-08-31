/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:56 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 05:13:06 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0') && (i < n) && (s1[i] == s2[i]))
		i++;
	if (i == n)
		return (0);
	else
		return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
}
