/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:58:31 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 09:57:31 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	while (power > 1)
	{
		nb = temp * nb;
		power--;
	}
	return (nb);
}

// #include <stdio.h>
// int main()
// {
//  printf("%d\n", ft_iterative_power(6,3));
// }