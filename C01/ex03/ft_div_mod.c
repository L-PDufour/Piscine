/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:05:05 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/15 11:36:46 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main (void)
{

	int Div;
	int Mod;
	
	ft_div_mod(5, 1, &Div, &Mod);
	printf("div = %d, mod = %d\n", Div, Mod);
}OOKK*/