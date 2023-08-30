/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:51:46 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/27 11:44:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
int main()
{
	char src[] = "hello,";
	char dest[] = " world";
	char src2[] = "HELLO,";
	char dest2[20] = "WORLD";
	printf("%s", ft_strncat(dest, src, 3));
	printf("\n");
	printf("%s", strncat(dest2, src2, 3));
	return 0;
}*/
