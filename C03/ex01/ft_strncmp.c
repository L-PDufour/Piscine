/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:27:01 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/24 09:50:14 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ret;

	ret = 0;
	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		{
			i++;
		}
		else
		{
		ret = s1[i] - s2[i];
			return (ret);
		}
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	unsigned int n;
// 	n = 50;
// 	char c[] = "aaaaaaa";
// 	char d[] = "b";
// 	printf("%d", ft_strncmp (c, d, n));
// 	printf("%d", strncmp (c, d, n));
// }
