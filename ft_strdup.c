/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:08:24 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:08:26 by mmaschio         ###   ########.fr       */
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
	new_string = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new_string))
		return (NULL);
	while (src[i] != '\0')
	{
		new_string[i] = src[i];
		i++;
	}
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
		printf("%s\nMinha função: %s\nFunção Original: %s\n",
			argv[1], my_string, copy);
		free(my_string);
		free(copy);
	}
	return (0);
}*/
