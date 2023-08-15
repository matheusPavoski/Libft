/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:32:23 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 14:32:45 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_strlen;
	size_t	s_len;
	char	*new_str;

	new_str = (char *)malloc(sizeof(*s) * (len + 1));
	if (new_str == 0)
		return (NULL);
	new_strlen = 0;
	s_len = 0;
	while (s[new_strlen] != '\0')
	{
		if ((new_strlen >= start) && (s_len < len))
		{
			new_str[s_len] = s[new_strlen];
			s_len++;
		}
		new_strlen++;
	}
	new_str[s_len] = 0;
	return (new_str);
}
