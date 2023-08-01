/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:15:14 by mpavoski          #+#    #+#             */
/*   Updated: 2023/08/01 08:28:53 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num_b)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0') && (i < num_b) && (str1[i] == str2[i]))
		i++;
	if (i == num_b)
		return (0);
	else
		return ((int)(unsigned char)str1[i] - (int)(unsigned char)str2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str1[] = "Hello";
	const char	str2[] = "Hello";

	printf("%d\n", ft_strncmp(str1, str2, 3));
	printf("%d\n", strncmp(str1, str2, 3));
	return(0);
}*/
