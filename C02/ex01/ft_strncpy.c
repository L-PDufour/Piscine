/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:42:56 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/19 12:35:29 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     unsigned int b = 3;
//     char src[] = "Charles";
// 	char dest[1024];
// 	printf (" src : %s, dest : %s\n", src, dest);
// 	ft_strncpy( dest, src, b);
// 	printf (" src : %s, dest : %s\n", src, dest);
// }