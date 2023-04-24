/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:49:22 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/15 11:03:11 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int main (void)
{
	int a = 3;
	int b = 5;
	printf ("a = %d, b = %d \n", a , b);
	ft_swap(&a , &b);
	printf ("a = %d, b = %d \n", a , b);
}OOKK*/
