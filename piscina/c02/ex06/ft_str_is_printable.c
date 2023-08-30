/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:57:30 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:10:06 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	salida;

	salida = 1;
	i = 0;
	while (str[i] != '\0' && salida != 0)
	{
		if (str[i] < 32 || str[i] > 126)
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

	char nombre[] = "huhfueh";	
	char nombre2[] = "ES\tO";
	char nombre3[] = "";
	ejemplo = ft_str_is_printable(nombre);
	printf("%d\n", ejemplo);
	ejemplo = ft_str_is_printable(nombre2);
	printf("%d\n", ejemplo);
	ejemplo= ft_str_is_printable(nombre3);
	printf("%d", ejemplo);
	return(0);
}*/
