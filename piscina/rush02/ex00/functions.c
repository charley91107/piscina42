/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resisco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:42:31 by resisco-          #+#    #+#             */
/*   Updated: 2023/08/27 17:55:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	dictionary(const char *filename)

{
	char	buffer[1024];
	int		length;
	FILE	*dictionary;

	dictionary = fopen(filename, "r");
	if (dictionary != '\0')
	{
		length = fread(buffer, 1, 1024, dictionary);
		buffer[length] = '\0';
		write(1, buffer, length);
		fclose(dictionary);
	}
	else
	{
		write (1, "Dict Error\n", 12);
	}
}

int	main(void)
{
	dictionary("numbers.dict");
	return (0);
}

/* In this file we have the functions that we will use in our project rush-02

struct number_word_pair
{
    int number;
    char word[20];
}*/
