/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:30:05 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 12:00:16 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0' )
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	(void) argv;
	i = argc - 1;
	while (i > 0)
	{
		str = argv[i];
		ft_putstr(str);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
