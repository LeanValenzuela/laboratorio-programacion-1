/*
 * utn_biblioteca.c
 *
 *  Created on: 9 sep. 2021
 *      Author: Leo
 */

#include "utn.biblioteca.h"

int pedirFloatUsuario(float *pNum, float min, float max, int reintentos,char *variableTexto, char *mensajeError)
{
	float buffer/*=auxiliar*/; //guardara mi valor de numero pedido (Sera mi BUFFER)
	int estado = -1; //cambiamos el valor con respecto a la clase 4
	int salidaScanf;

	if (pNum != NULL && min < max && reintentos >= 0) //NULL(solo funciona con punteros para saber si estamos trayendo algo bien de la memoria)
			{
		for (int i = 0; i <= reintentos; i++) {
			printf("%s", variableTexto/*"Ingrese un numero: \n"*/);
			salidaScanf = scanf("%f", &buffer); //(si scanf devuelve 1 es un texto por lo que sera invalido en caso de querer solo numeros)
			//scanf("%f",pNum);

			printf("\nLa salida del scanf es: %d", salidaScanf); //para mostrar el valor devuelto por scanf.

			if (salidaScanf > 0 && buffer >= min && buffer <= max) {
				*pNum = buffer;
				estado = 0; //en este caso el 0 es lo correcto.
				break; //para salir del for en caso de que el usuario haya dado por fin un dato valido.
					   // el break, rompera el bucle mas cercano.
			} else {
				estado = -2;
				printf("%s", mensajeError);
			}
		}
	}
	return estado;
}

int pedirCharUsuario(char *pChar, char min, char max, int reintentos,char *variableTexto, char *mensajeError)
{
	char buffer/*=auxiliar*/;//guardara mi valor de numero pedido (Sera mi BUFFER)
	int estado = -1; //cambiamos el valor con respecto a la clase 4
	int salidaScanf;

	if (pChar != NULL && min < max && reintentos >= 0) //NULL(solo funciona con punteros para saber si estamos trayendo algo bien de la memoria)
			{
		for (int i = 0; i <= reintentos; i++) {
			printf("%s", variableTexto/*"Ingrese un numero: \n"*/);
			fflush(stdin);
			salidaScanf = scanf("%c", &buffer); //(si scanf devuelve 1 es un texto por lo que sera invalido en caso de querer solo numeros)
			//scanf("%f",pNum);				//(solo esta para saber i se asigno a lgo valido o no)

			printf("\nLa salida del scanf es: %d", salidaScanf);//para mostrar el valor devuelto por scanf.

			if (salidaScanf > 0 && buffer >= min && buffer <= max) {
				*pChar = buffer;
				estado = 0; //en este caso el 0 es lo correcto.
				break; //para salir del for en caso de que el usuario haya dado por fin un dato valido.
					   // el break, rompera el bucle mas cercano.
			} else {
				estado = -2;
				printf("%s", mensajeError);
			}
		}
	}
	return estado;
}

int pedirIntUsuario(int *pNumInt, float min, float max, int reintentos,char *variableTexto, char *mensajeError)
{
	int buffer/*=auxiliar*/;//guardara mi valor de numero pedido (Sera mi BUFFER)
	int estado = -1; //cambiamos el valor con respecto a la clase 4
	int salidaScanf;

	if (pNumInt != NULL && min < max && reintentos >= 0) //NULL(solo funciona con punteros para saber si estamos trayendo algo bien de la memoria)
			{
		for (int i = 0; i <= reintentos; i++) {
			printf("%s", variableTexto/*"Ingrese un numero: \n"*/);
			salidaScanf = scanf("%d", &buffer); //(si scanf devuelve 1 es un texto por lo que sera invalido en caso de querer solo numeros)
			//scanf("%f",pNum);				//(solo esta para saber i se asigno a lgo valido o no)

			printf("\nLa salida del scanf es: %d", salidaScanf);//para mostrar el valor devuelto por scanf.

			if (salidaScanf > 0 && buffer >= min && buffer <= max) {
				*pNumInt = buffer;
				estado = 0; //en este caso el 0 es lo correcto.
				break; //para salir del for en caso de que el usuario haya dado por fin un dato valido.
					   // el break, rompera el bucle mas cercano.
			} else {
				estado = -2;
				printf("%s", mensajeError);
			}
		}
	}
	return estado;
}
