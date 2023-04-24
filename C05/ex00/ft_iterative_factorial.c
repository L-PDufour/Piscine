/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:00:38 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 11:33:59 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
	fact = i * fact;
	i++;
	}
	return (fact);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf (" %d\n", ft_iterative_factorial(-1));
// }