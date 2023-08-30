/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:14:33 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/29 20:35:36 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	else
				i++;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				str[i] = str[i];
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[] = "estos es jhd+sjhd2232 iu 'fj? ? ghfhdg";
	printf("%s", ft_strcapitalize(word));
	return (0);
}
