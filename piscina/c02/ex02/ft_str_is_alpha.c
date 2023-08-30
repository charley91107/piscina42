/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:28:47 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/24 14:20:37 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	salida;

	salida = 1;
	i = 0;
	while (str[i] != '\0' && salida != 0)
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
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

	char nombre[] = "Es?to";	
	char nombre2[] = "esto";
	char nombre3[] = "";
	ejemplo = ft_str_is_alpha(nombre);
	printf("%d\n", ejemplo);
	ejemplo = ft_str_is_alpha(nombre2);
	printf("%d\n", ejemplo);
	ejemplo= ft_str_is_alpha(nombre3);
	printf("%d", ejemplo);
	return(0);
}*/
