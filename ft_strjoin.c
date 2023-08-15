/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:25:18 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 20:07:25 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	i2;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	i2 = 0;
	result = (char *) malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
	{
		result[i + i2] = s2[i2];
		i2++;
	}
	result[i + i2] = '\0';
	return (result);
}
