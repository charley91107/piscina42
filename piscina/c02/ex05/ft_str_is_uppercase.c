/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:50:09 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/22 17:54:25 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	salida;

	salida = 1;
	i = 0;
	while (str[i] != '\0' && salida != 0)
	{
		if (str[i] < 65 || str[i] > 90)
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

	char nombre[] = "ESTO";	
	char nombre2[] = "EStO";
	char nombre3[] = "";
	ejemplo = ft_str_is_uppercase(nombre);
	printf("%d\n", ejemplo);
	ejemplo = ft_str_is_uppercase(nombre2);
	printf("%d\n", ejemplo);
	ejemplo= ft_str_is_uppercase(nombre3);
	printf("%d", ejemplo);
	return(0);
}*/
