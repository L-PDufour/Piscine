/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:24:56 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/31 09:35:48 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
	free (tab);
}

// #include <stdio.h>
// int main(void)
// { 
// 	int *tab;
// 	int i;

// 	i = 0;
// 	tab = ft_range(1, 10);
// 	while (tab[i] != '\0' )
// 	{
// 		printf("%d\n" , tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
