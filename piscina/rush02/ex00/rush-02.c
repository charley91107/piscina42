/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resisco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:43:43 by resisco-          #+#    #+#             */
/*   Updated: 2023/08/27 17:54:52 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	dictionary(const char *filename);

void	rush_02()
{
	//Leer el diccionario mediante la fncion "open" (realizado en el main)
	//
	//si no lo puede leer generar ERROR de lectura
	//
	//pedir al cliente que haga un input de 1 o 2 argumentos
	//
	//control de ERRORES o si meten argumentos fuera de las normas
	//		- debe tener entre 1 y 2 argumentos
	//		- el argumento 1 debe ser un int
	//		- el argumento 2 no puede estar vacio si 1 no existe.
	//		- 
	//
	//en caso de tener uun argumento:
	//	*leer el diccionario con la funcion "read"
	//	*buscar en el diccionario si el valor existe
	//		- si existe sacar por pantalla la definicion resultante
	//		- si NO existe sacamos un error
	//	*cerrar el dccionario con la funcion "close"
	//
	//en caso de tener dos argumentos:
	//	*leer el diccionario con la funcion "open"
	//	*buscar en el diccionario si el valor existe
	//		- si existe cambiar a definicion existente por el valor del segundo argumento
	//		- si NO existe creamos la nueva key del primer argumento con la definicion del segundo argumento}
	//	*cerrar el diccionario con la funcion "close"
}

int	main(int argc, char **argv)
{
	dictionary("numbers.dict");
	if (argc > 3)
	{
		write (1, "Error\n", 6);
	}
	else
	{
		write(1, argc, 1);
	}
	return (0);
}
