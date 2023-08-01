/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:26:37 by mpavoski          #+#    #+#             */
/*   Updated: 2023/08/01 14:21:25 by mpavoski         ###   ########.fr       */
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