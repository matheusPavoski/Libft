/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:32:23 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 20:29:36 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	size_t	str_len;
	char	*substr;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	else if (start + len > str_len)
		len = str_len - start;
	substr = (char *)malloc(sizeof(*substr) * (len + 1));
	if (!substr)
		return (NULL);
	substr_len = 0;
	while (substr_len < len && s[start] != '\0')
	{
		substr[substr_len] = s[start];
		substr_len++;
		start++;
	}
	substr[substr_len] = '\0';
	return (substr);
}
