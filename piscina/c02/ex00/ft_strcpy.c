/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:24:10 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/24 14:18:37 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[30] =  "hola carlos como estas";
	char dest[30] = "";
	printf("source primero es = %s / destination inicial es = %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("source = %s / destination = %s", src, dest);
	return (0);
}*/
