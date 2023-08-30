/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:48:33 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/29 20:57:18 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	result = 1;
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (result);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(5, 6));
	return 0;
}*/
