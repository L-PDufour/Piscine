/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:51:29 by ldufour           #+#    #+#             */
/*   Updated: 2023/01/17 12:06:02 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// int main(void)
// {
// 	char src[] = "Charles";
// 	char dest[1024];
// 	printf (" src : %s, dest : %s\n", src, dest);
// 	ft_strcpy( dest, src);
// 	printf (" src : %s, dest : %s\n", src, dest);
// }