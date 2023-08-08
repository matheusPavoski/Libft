/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:59:28 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/08 12:11:35 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_string;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!(new_string = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (src[i] != '\0')
		new_string[i++] = *src++;
	new_string[i] = '\0';
	return (new_string);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*my_string;
	char	*copy;

	if (argc == 2)
	{
		my_string = ft_strdup(argv[1]);
		copy = strdup(argv[1]);
		printf("%s\n", my_string);
		printf("%s\n", copy);
	}
	return (0);
}*/
