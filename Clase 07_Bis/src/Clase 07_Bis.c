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

#define QY_COD_AREA 5

void funcion(int pArrayAOrdenar[],int pArrayOrdenado[],int len);

int main(void) {

	setbuf(stdout,NULL);

	int codigosArea[QY_COD_AREA] = {8,20,134,23,50};

	int codigoOrdenado[QY_COD_AREA];

	funcion(codigosArea[QY_COD_AREA],codigoOrdenado[QY_COD_AREA],QY_COD_AREA);

	//indice 0  1   2    3   4
	//valor  8  20  134  23  50

	//num 8
	//numero a reemplazar 134

	//buscar el mas grande (o mas pequeño)
	//134
	//indice 2

	///indice  0    1   2  3   4
	//valor    134  20  8  23  50    PERO HABRIA QUE YA NO TOMAR EL DATO BUSCADO, LAS VOY RESERVANDO

	//indice 0  1   2   3
	//valor  8  20  23  50

	///buscar el mas grande
	//valor 134 50

	return EXIT_SUCCESS;
}

void funcion(int pArrayAOrdenar[],int pArrayOrdenado[],int len)
{
	int max=0;
	int contadorOrdenado=0;
	int flagEncontreMayor=1;
	int i;
	int indiceMayor=0;

	do{
		for(i=0;i<len - contadorOrdenado;i++)
		{
			if(pArrayAOrdenar[i]>pArrayAOrdenar[i+1] && i+1 <len)
			{
				max=pArrayAOrdenar[i];
				flagEncontreMayor=0;
			}
		}

		for(int indice=0;indice<len - contadorOrdenado;indice++)
		{
			if(indice==indiceMayor)
			{
				pArrayAOrdenar[indice] = pArrayAOrdenar[indice+1];
			}
		}

		if(flagEncontreMayor<=0)
		{
			pArrayOrdenado[contadorOrdenado] = max;
		}

		contadorOrdenado++;
	} while(contadorOrdenado<=len);

	pArrayOrdenado[contadorOrdenado]=max;

}
