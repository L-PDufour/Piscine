/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:51:12 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/31 10:43:04 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = (int *) malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
	free (tab);
}

// #include <stdio.h>
// int main(void)
// { 
// 	int	*tab;
// 	int	i;
// 	ft_ultimate_range(&tab, 1, 10);
// 	i = 0;
// 	while (tab[i] != '\0')
// 	{
// 		printf("%d\n" , tab[i]);
// 		i++;
// 	}
// 	return (0);
// }