/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:34:08 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/16 12:58:49 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while ((s1[start] != '\0') && (ft_strchr(set, s1[start])))
		start++;
	return (start);
}

size_t	find_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while ((end > 0) && (ft_strchr(set, s1[end])))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	new_len;
	size_t	i;
	char	*trim_str;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (end >= start)
		new_len = end - start + 1;
	else
		new_len = 0;
	trim_str = (char *) malloc((new_len + 1) * sizeof(char));
	if (!trim_str)
		return (NULL);
	i = 0;
	while (i < new_len)
	{
		trim_str[i] = s1[start + i];
		i++;
	}
	trim_str[new_len] = '\0';
	return (trim_str);
}
