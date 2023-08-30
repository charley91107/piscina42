/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:33:30 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/22 17:42:45 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	salida;

	salida = 1;
	i = 0;
	while (str[i] != '\0' && salida != 0)
	{
		if (str[i] < 48 || str[i] > 57)
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

	char nombre[] = "Esto";	
	char nombre2[] = "2547";
	char nombre3[] = "";
	ejemplo = ft_str_is_numeric(nombre);
	printf("%d\n", ejemplo);
	ejemplo = ft_str_is_numeric(nombre2);
	printf("%d\n", ejemplo);
	ejemplo= ft_str_is_numeric(nombre3);
	printf("%d", ejemplo);
	return(0);
}*/
