/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:12:15 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/08/19 10:36:29 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	*tab2;
	int	cont;

	cont = 0;
	tab2 = (tab + size - 1);
	while (cont < size / 2)
	{
		temp = *tab;
		*tab = *tab2;
		*tab2 = temp;
		tab++;
		tab2--;
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
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	print_array(array, size);
	ft_rev_int_tab(&array[0], 5);
	print_array(array, size);
}*/
