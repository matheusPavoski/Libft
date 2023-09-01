/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:22:20 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 23:37:56 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_border(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (ft_set_border(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_calloc(1, 1));
	while (ft_set_border(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start) + 1));
}
