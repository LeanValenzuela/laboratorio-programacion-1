/*
 ============================================================================
 Name        : Clase.c
 Author      : Leandro Valenzuela
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ===========================================================================

 ============================================================================
 Name        : Clase03.c
 Author      : Marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
//Parte tres
int dividirEnteros(int numUno,int numDos,float* resultado);

int main(void) {

	setbuf(stdout,NULL);

	int numeroUno; //basura
	int	numeroDos; //basura
	int resultadoDivision;
	float resultadoOperacion;

	//para crear una funcion hay que recordar que consta de 3 partes

	printf("Ingrese el valor de la primera compra: \n");
	scanf("%d",&numeroUno); //numeroUno = 8

	printf("Ingrese el valor de la segunda compra: \n");
	scanf("%d",&numeroDos); //numeroDos = 5

	//usando dividir
	resultadoDivision = dividirEnteros(numeroUno,numeroDos,&resultadoOperacion);
	if(resultadoDivision==1){
		printf("Salio todo mal");
	}
	else
	{
		printf("El resultado de la division es %f",resultadoOperacion);
	}


	return EXIT_SUCCESS;
}

//parte A
//retornar nombreFuncion(parametros de la funcion)




//construyendo
int dividirEnteros(int numUno,int numDos,float* resultado) //pasaje por referencia
{
	int retorno = 0;//salio todo bien
	if(numDos!=0) //esto es lo que causa el error
	{
		*resultado =(float)numUno / numDos;
	}
	else
	{
		retorno = 1;//si salio todo mal
	}

	return retorno;
}

//se usa asi imprimirResultado("El resultado de la suma es ",resultado);

void imprimirResultado(char mensaje[],int numero)
{
	printf("%s %d",mensaje,numero);
}
