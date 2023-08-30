/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:24:00 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/28 22:39:12 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' ) && (str[i] <= '9'))
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>
int main()
{
	char input[] = "-----+--1234ab567";

	int num = ft_atoi(input);
	printf("el valor convertido es: %d\n", num);
	return 0;
}*/
