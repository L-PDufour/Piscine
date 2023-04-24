/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:08:13 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 10:52:24 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return ((ft_fibonacci(index -1)) + ft_fibonacci(index -2));
}

// #include <stdio.h>
// int main ()
// {
// 	printf("%d", ft_fibonacci(9));
// }