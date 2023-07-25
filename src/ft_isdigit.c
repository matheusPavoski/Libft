/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:20:47 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/25 11:26:53 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit (int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else	
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	int	c;
	
	c = '7';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	return (0);
}*/