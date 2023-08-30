/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:19:56 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/27 17:04:12 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
int main()
{
	char src[] = "hello,";
	char dest[20] = " world";
	char src2[] = "hello,";
	char dest2[20] = " world";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s", strcat(dest2, src2));
	return 0;
}
