/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:18:42 by mpavoski          #+#    #+#             */
/*   Updated: 2023/08/02 10:46:20 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sustr, size_t len)
{
	size_t	sub_l;
	size_t	i;

	sub_l = ft_strlen(sustr);
	i = 0;
	if (sustr[i] == '\0')
		return ((char *)str);
	if (sub_l > len)
		return (NULL);
	while ((i <= len) && (str[i] != '\0'))
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
