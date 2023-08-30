/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:40:07 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/22 17:47:10 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	salida;

	salida = 1;
	i = 0;
	while (str[i] != '\0' && salida != 0)
	{
		if (str[i] < 97 || str[i] > 122)
		{
			salida = 0;
		}
		i++;
	}
	return (salida);
}

/*int main()
{
	int ejemplo;

	char nombre[] = "esto";	
	char nombre2[] = "esTo";
	char nombre3[] = "";
	ejemplo = ft_str_is_lowercase(nombre);
	printf("%d\n", ejemplo);
	ejemplo = ft_str_is_lowercase(nombre2);
	printf("%d\n", ejemplo);
	ejemplo= ft_str_is_lowercase(nombre3);
	printf("%d", ejemplo);
	return(0);
}*/
