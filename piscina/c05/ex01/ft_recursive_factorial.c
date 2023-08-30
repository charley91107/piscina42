/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 23:12:15 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/29 20:41:24 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (fact);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(11));
	return 0;
}*/
