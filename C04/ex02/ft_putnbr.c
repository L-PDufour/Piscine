/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:10:13 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/24 13:53:11 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}	
	if (nb > 9)
	{	
		ft_putnbr(nb / 10);
	}
	if (nb >= 0)
		ft_putchar(nb % 10 + '0');
}

// int main()
// {
// 	int nb;
// 	nb = 1;
// 	ft_putnbr(nb);
// }