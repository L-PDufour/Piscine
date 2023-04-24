/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:34:01 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/25 12:13:11 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			if (*to_find == '\0' )
				return (NULL);
			while (str[i + j] == to_find[j])
			{
			j++;
				if (to_find[j] == '\0')
				{
					return (&str[i]);
				}
			}
		}
	i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char *haystack = "";
// 	char *needle = "a";
// 	printf("%s\n", ft_strstr(haystack, needle));
// 	char *haystac = "";
// 	char *needl = "a";
// 	printf("%s\n", strstr(haystac, needl));
// }
