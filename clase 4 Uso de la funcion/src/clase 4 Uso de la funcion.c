/*
 ============================================================================
 Name        : clase.c
 Author      : Leandro Valenzuela
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;

	float r;
	int estado;
	float num1,num2;

	printf("r vale:%f la direccion es %p\n",r,&r);

	if(pedirFloatAUsuario(&num1,0.0,1000.0,3/*REINTENTOS*/)==0)
	{
		printf("Ingresaste %f:",num1);

		if(pedirFloatAUsuario(&num2,0.01,1000.0,3/*REINTENTOS*/)==0)
		{
			printf("Ingresaste %f:",num2);

			estado = dividir(num1,num2,&r);
			if(estado==0)
			{
				// pude dividir
				printf("El resultado da:%f",r);
			}
			else
			{
				printf("No se puede dividir\n");
			}
		}
		else
		{
			printf("ese numero noooooo");
		}
	}
	else
	{
		printf("ese numero noooooo, no puedo seguir con el programa");

	}
}
