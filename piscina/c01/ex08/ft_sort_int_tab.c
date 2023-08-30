/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:22:02 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/19 10:37:17 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	temp;
	int	cont;

	cont = 0;
	while (cont < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		cont++;
	}	
}

/*void	print_array(int *array, int size)
{
	int	cont;

	cont = 0;
	while (cont < size)
	{
		printf("%d ", array[cont]);
		cont++;
	}
	printf("\n");
}

int	main(void)
{
	int	size;
	int	array[5];

	size = 5;
	array[0] = 8;
	array[1] = 3;
	array[2] = 5;
	array[3] = 5;
	array[4] = 7;
	print_array(array, size);
	ft_sort_int_tab(&array[0], 5);
	print_array(array, size);
}*/
