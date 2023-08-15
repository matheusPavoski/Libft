/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:06:28 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/15 10:04:16 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'B';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}*/