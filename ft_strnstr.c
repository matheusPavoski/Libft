/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:09:06 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:09:08 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sustr, size_t len)
{
	size_t	sub_l;
	size_t	i;

	sub_l = ft_strlen(sustr);
	i = 0;
	if (str == NULL || sustr == NULL)
		return (NULL);
	if (sustr[i] == '\0')
		return ((char *)str);
	if (sub_l > len)
		return (NULL);
	while ((i <= len - sub_l) && (str[i] != '\0'))
	{
		if (ft_strncmp(&str[i], sustr, sub_l) == 0)
			return ((char *)&str[i]);
		i++;
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
