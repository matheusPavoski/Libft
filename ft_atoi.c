/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:32:54 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/02 15:40:29 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (((*str == 32) || (*str >= 9)) && (*str <= 13))
		str++;
	if (*str == '-')
		sign = ((sign) * (-1));
	if ((*str == '-') || (*str == '+'))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
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
