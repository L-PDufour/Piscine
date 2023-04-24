/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:09:06 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 12:03:07 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[i] && s2[i] != '\0')
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char c[] = "ad";
// 	char d[] = "a";
// 	printf("%d\n", ft_strcmp(c, d));
// 	char e[] = "ad";
// 	char f[] = "a";
// 	printf("%d\n", strcmp(e, f));
// }
