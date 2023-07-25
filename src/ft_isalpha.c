/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:07:40 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/25 11:14:30 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha (int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	
	c = 'a';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n",isalpha(c));
	return (0);
}*/
