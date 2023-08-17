/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:47:33 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/17 09:52:06 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntstr(char const *s, char c)
{
	size_t	cnt;
	int		i;

	cnt = 0;
	i = 0;
	if (!*s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cnt++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**str_list;
	size_t	str_len;
	int		i;
	int		i_list;

	i = 0;
	i_list = 0;
	str_list = (char **) malloc((ft_cntstr(s, c) + 1) * sizeof(char *));
	if ((!s) || (!str_list))
		return (NULL);
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		if (s[i] != '\0')
		{
			str_len = 0;
			while ((s[i + str_len] != c) && (s[i + str_len] != '\0'))
				str_len++;
			str_list[i_list++] = ft_substr(s, i, str_len);
			i = i + str_len;
		}
	}
	str_list[i_list] = NULL;
	return (str_list);
}
