/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:49:32 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/24 13:51:24 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	compteur;

	compteur = 1;
	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			compteur++;
		str++;
	}	
	if (compteur % 2 == 0)
		sign = -1;
	while (*str == '-' || *str == '+')
			str++;
	while (*str >= '0' && *str <= '9' )
	{
			result = result * 10 + *str - '0';
			str++;
	}
	return (sign * result);
}

// # include <stdlib.h>
// #include <stdio.h> 
// int main()
// {
// 	printf("atoye vaut : %i\n",ft_atoi(" ---+--1234ab567"));
// 	printf("atoye vaut : %i\n",atoi(" ---+--+1234ab567"));
// 	}