/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:22:56 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/27 11:45:35 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}	
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	if (to_find[j] == '\0')
		return (str);
	return (0);
}

/*#include <string.h>
int main()
{
	char str[] = "hola que tal estas";
	char to_find[] = "que tal";
	char str2[] = "hola que tal estas";
	char to_find2[] = "que tal";

	printf("%s", ft_strstr(str, to_find));
	printf("\n");
	printf("%s", strstr(str2, to_find2));
	return 0;
}*/
