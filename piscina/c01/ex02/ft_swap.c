/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:15:22 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/19 10:33:30 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main ()
{
	int a;
	int b;

	a = 15;
	b = 10;
	ft_swap(&a, &b);
	printf("ahora a es igual a %d y b es igual a %d", a, b);
	return 0;
}*/
