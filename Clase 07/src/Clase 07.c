/*
 ============================================================================
 Name        : Clase.c
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
}

int borrarImparesArray(float arrayEnteros[], int len)
{
	int retorno=-1;

	if(arrayEnteros!=NULL && len >=0)//preguntar si algo es valido
	{
		for(int i=0;i<len;i++)
		{
			//arrayEnteros[i] = >1
			//indice --- valor
			// 0 	 ---  1
			// 1 	 ---  2020
			// 2 	 ---  3

			if(encontroImpar(arrayEnteros,i)/*arrayDeEnteros[i]%2!=0*/)
			{
				// aca es un impar
				arrayEnteros[i] = 0;
			}

		}
		retorno=0;
	}
	return retorno;
}

static int encontroImpar(int arrayABuscar[],int indice)
{
	int retorno = -1;

	if(arrayABuscar[indice]%2!=0)
	{
		retorno = 0;
	}
	return retorno;
}
