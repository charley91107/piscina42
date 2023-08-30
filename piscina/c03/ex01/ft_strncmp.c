/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:02:34 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/30 19:39:13 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i]  && s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0')
			|| (s1[i] != '\0' && s2[i] == '\0')))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

#include <string.h>
int main (void)
{
	char s2[] = "AAAAAAAAAAAA";
	char s1[] = "aaaaaa";
	char s4[] = "AAAAAAAAAAAA";
	char s3[] = "aaaaaa";

	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d", strncmp(s3, s4, 6));
	return 0;
}	
