/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:47:26 by mpavoski          #+#    #+#             */
/*   Updated: 2023/07/31 14:08:43 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return ((char *)0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Bom dia, dev!";

	printf("%s\n", ft_strrchr(str, 'd'));
	return(0);
}*/