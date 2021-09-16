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
int imprimirArrayEnteros(int arrayAImprimir[], int len);
void imprimirElemento(int elemento, int indice);
int ordenarArray(int arrayAOrdenar[],int len);

int main(void) {
	setbuf(stdout,NULL);
	int codigosArea[QY_COD_AREA] = {8,20,134,23,50};
	imprimirArrayEnteros(codigosArea[QY_COD_AREA],QY_COD_AREA );
	ordenarArray(codigosArea[QY_COD_AREA],QY_COD_AREA );
	imprimirElemento(codigosArea[QY_COD_AREA],QY_COD_AREA );

	printf("/n cantidad de vueltas: %d",ordenarArray);

	return EXIT_SUCCESS;
}

int imprimirArrayEnteros(int arrayAImprimir[], int len)
{
	int retorno=-1;

	if(arrayAImprimir!=NULL && len >=0)
	{
		for(int i=0;i<len;i++)
		{
			imprimirElemento(arrayAImprimir[i],i);

			printf("/n");
		}
	}
	return retorno;
}

void imprimirElemento(int elemento, int indice)
{
	printf("Elemento del Array: %d y posicion: %d",elemento,indice);
}

int ordenarArray(int arrayAOrdenar[],int len)
{ //DE MAYOR A MENOR
	int retorno= -1;
	int flagSwap;

	int auxiliar;
	int contadorVueltas=0;

	int limite = len;

	if(arrayAOrdenar!=NULL && len >=0)
	{
		do
		{
			flagSwap=0; //esto es pensar que esta ordenado
			limite = limite - 1;
			for(int i = 0; i < limite; i++)
			{
				if(arrayAOrdenar[i] < arrayAOrdenar[i+1])
				{
					flagSwap=1;//consideramos que esta desordenado
					//SWAP
					auxiliar=arrayAOrdenar[i]; //aux 8
					arrayAOrdenar[i]=arrayAOrdenar[i+1]; //array[i] 20
					arrayAOrdenar[i+1]=auxiliar; //array[i+1] 8
				}
			}
			contadorVueltas++;

		}while(flagSwap==1);

		retorno=contadorVueltas; //retornara la cantidad de vueltas
	}
	return retorno;
}
