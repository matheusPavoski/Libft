/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:05:53 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/28 15:17:21 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}


/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c", ft_toupper('o'));
	printf("%c\n", toupper('i'));
	return(0);
}*/