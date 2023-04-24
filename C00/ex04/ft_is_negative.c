/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:00:01 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/21 11:34:46 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write (1, &c, 1);
	}
	else
	{
		c = 'N';
		write (1, &c, 1);
	}
}

// int main (void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }