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

#define EDADES_LEN 10000
//(si scnaf devuelve 1 es un texto por lo que sera invalido en caso de querer solo numeros)
int main(void) {
	/* MEMORIA DINAMICA
	 * int edades[var];
	 * crecer
	 * decrecer
	 * (no vamos a usarlas pora ahora
	 */

	//ARRAY ESTATICOS
	int edades[10000];//todos los elementos son iguales,

	//edades[indice]=x //debo trabajar con una posicion, no con el array entero
	edades[4] = 9; //en el elemento 4 puse un 9

	int a;
	a = 9;
	edades[4] = 9;

	int b;

	b = edades[4];
	/*
	int edades[5]={0,0,0,0,0};// 0 al 4: 5 elementos
	int indice;

	printf("%d\n",edades[0]);
	printf("%d\n",edades[1]);
	printf("%d\n",edades[2]);
	printf("%d\n",edades[3]);
	printf("%d\n",edades[4]);
	//==

	for(indice=0; indice<5; indice++)
	{
		printf("%d/n",edades[indice]);
	} */

	int edades[EDADES_LEN];

	for(indice=0; indice<EDADES_LEN; indice++)
	{
		edades[indice]=0; // para inicializar todos los datos de los espacios de memoria en 0
	}

	for(indice=0; indice<EDADES_LEN; indice++) //SIEMPRE USAR EL MENOR Y EL TAMAÑO DE LA ARRAY
	{
		printf("%d/n",edades[indice]); //ME IMPRIME EL ARRAY
	}

	//EL ARRAY NO SE PUEDE AGRANDAR = ESTARIA ESCRIBIENDO POR FUERA DE LA MEMORIA DEL ARRAY

	//EL NOMBRE LA ARRAY ES LA DIRECCION DE MEMORIA DONDE EMPIEZA LA ARRAY
	//COMO EL NOMBRE DE LA ARRAY YA ME DEVUELVE UNA DIRECCION DE MEMORIA POR LO QUE YA NO NECESITAMOS DECLARARLO CON'&'
	//imprimirEdades(edades);//el tamaño no se guarda en ningun lugar
	//imprimirEdades(&a); //estoy llamado  a la funcion
	//imprimirEdades(edades[]); MAL
	//imprimirEdades(edades[EDADES_LEN];MAL
	imprimirEdades(edades,EDADES_LEN); //le paso donde comienza el array y el tamaño definido

	// void imprimirEdades(int* pPedirEdades)
	//void imprimirArrayDeEdades(int* pPedirEdades)
	// 							==
	void imprimirArrayDeEdades(int edades[], int len)//puntero(guarda en una direccion de memoria)
	{
		for(int indice=0; indice<len; indice++) //SIEMPRE USAR EL MENOR Y EL TAMAÑO DE LA ARRAY
		{
			printf("%d/n",edades[indice]); //ME IMPRIME EL ARRAY
		}
	}

	inicializarArrayDeEdades(edades,EDADES_LEN,0);

	return EXIT_SUCCESS;
}
void inicializarArrayDeEdades(int pEdades[],int len,int valorInicial)
{
	int indice;

	for(indice=0; indice<len; indice++)
	{
		pEdades[indice]=valorInicial//0;
	}

}
