/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:09:22 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:09:25 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c", ft_tolower('O'));
	printf("%c\n", tolower('I'));
	return(0);
}*/