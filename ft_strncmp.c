/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:56 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 20:29:22 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num_b)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0') && (i < num_b) && (str1[i] == str2[i]))
		i++;
	if (i == num_b)
		return (0);
	else
		return ((int)(unsigned char)str1[i] - (int)(unsigned char)str2[i]);
}
