/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:54:23 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 11:33:14 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	if (nb < 0)
		return (0);
	while (result < nb)
	{
		result = i * i;
		i++;
	}
	i--;
	if (i == nb / i)
		return (i);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_sqrt(100));
// }