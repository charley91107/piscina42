/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:13:46 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/27 13:35:08 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	space;

	i = 0;
	j = 0;
	space = 0;
	while (dest[i] != '\0')
		i++;
	while (src[space] != '\0')
		space++;
	if (size <= i)
		space = size + space;
	else
		space = space + i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (space);
}

#include <string.h>
#include <unistd.h>
int main()
{
	char src[] = "HELLO";
	char dest[10] = "WORLD";
	char src2[] = "hello";
   	char dest2[10] = "world";	

	printf("%u", ft_strlcat(dest, src, 10));
	printf("\n");
	printf("%lu", strlcat(dest2, src2, 10));
	return 0;
}
