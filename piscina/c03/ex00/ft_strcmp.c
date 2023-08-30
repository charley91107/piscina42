/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:10:14 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/27 11:34:56 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <string.h>
int main (void)
{
	char s1[] = "banabb";
	char s2[] = "banaaa";
	char s3[] = "banabb";
	char s4[] = "banaaa";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s3, s4));
	return 0;
}*/	
