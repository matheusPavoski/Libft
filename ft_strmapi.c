/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:00:57 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/31 05:09:14 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!s || !f)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str [i] = f(i, (char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
