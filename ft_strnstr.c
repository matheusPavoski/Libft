/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:09:06 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 16:21:47 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	len_substr;

	len_substr = ft_strlen(substr);
	if (*substr == '\0')
		return ((char *)str);
	while (*str && len_substr <= len--)
	{
		if (ft_strncmp(str, substr, len_substr) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "Meu nome é Thuds, prazer!";
	const char	subst[] = "Thuds";
	size_t		len = 12;
	char		*result = ft_strnstr(str, subst, len);

	if (*subst != '\0')
	{
		printf("%s\n", result);
	}
	else if (result == NULL)
		printf("%s\n", "Sub-string não localizada no tamanho fornecido");
	return (0);
}*/
