/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:43:55 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/01 10:07:39 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	str = NULL;
	if (size <= 0)
		return (str);
	len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (++i < size)
		len = len + ft_strlen(strs[i]);
	len++;
	str = malloc(sizeof(char) * len);
	ft_strcpy(str, strs[0]);
	i = 1;
	while (++i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
	}
	return (str);
	free (str);
}

// #include <stdio.h>
// int main()
// {
// 	int size = 5;
// 	char *strings[] = {"These", "are", "some", "strings"};
// 	char *sep = "@@@@";
// 	char *test = ft_strjoin( size, strings, sep);
// 	printf("%s\n", test);
// }
