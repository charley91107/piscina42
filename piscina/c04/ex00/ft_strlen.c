/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:20:55 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/28 15:44:06 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uso: %s <cadena>\n", argv[0]);
        return 1;
    }

    char *cadena = argv[1];
    int longitud = ft_strlen(cadena);

    printf("La longitud de la cadena '%s' es: %d\n", cadena, longitud);

    return 0;
}*/
