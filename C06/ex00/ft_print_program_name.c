/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:29:22 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/18 14:01:01 by ldufour          ###   ########.fr       */
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
	char	*str;

	(void) argc;
	(void) argv;
	str = argv[0];
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
