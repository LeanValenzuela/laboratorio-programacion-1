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

//prototipos de las funciones
int sumarConLimite(int num1,int num2);

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int numeroDos;
	int suma;

	printf("\nIngrese un numero: \n");
	scanf("%d",&numero); //33

	printf("\nIngrese el otro numero: \n");
	scanf("%d",&numeroDos); //27

	suma=sumarConLimite(numero,numeroDos);

	printf("\nLa suma es: %d\n",suma);



	return EXIT_SUCCESS;
}

//funciones auxiliares

//definicion de la funcion sumarConLimite;

//TIPO	NOMBRE_DE_LA_FUNCION (TIPO NOMBRE ARGUMENTO, ....)
//TIPO	NOMBRE_DE_LA_FUNCION (void)

int sumarConLimite(int num1,int num2) //prototipo
{
	int resultado; //variable local, viven solo dentro de la funcion
	//num1=33 y num2=27
	//codigo de mi funcion
	resultado=num1+num2;

	if(resultado>100)
	{
		resultado=100;
	}

	//retornar valor
	return resultado;
}

//Variable= un espacio reservado en memoria
