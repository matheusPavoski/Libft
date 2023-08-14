/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:29 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/14 17:05:35 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
		result = 10 * result + (str[i++] - '0');
	return (result * sign);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int	my_atoi;
	int	org_atoi;

	if (argc == 2)
	{
		my_atoi = ft_atoi(argv[1]);
		org_atoi = atoi(argv[1]);
		printf("Minha atoi: %d\n", my_atoi);
		printf("Atoi original: %d\n", org_atoi);
	}
	return (0);
}*/
