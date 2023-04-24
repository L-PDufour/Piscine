/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:16:05 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/01 13:45:30 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	while (size > 0)
	{
		*tab = size;
		size--;	
	}
	
}

#include <stdio.h>
int main()
{
	int *tab;
	int i;
	
	i = 0;
	ft_rev_int_tab(tab, 10);
	while (tab[i] != 0)
	{
		printf("%d", *tab);
		i--;
	}

}