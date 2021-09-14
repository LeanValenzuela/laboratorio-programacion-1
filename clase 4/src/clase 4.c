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

//#define REINTENTOS 3

int dividir(float a, float b, float* pResultado);
int pedirFloatUsuario(float* pNum,float min,float max,int reintentos,char* variableTexto,char* mensajeError);

int main(void)
{
	// WINDORRRRRRR
	setbuf (stdout,NULL);
	//______________
	float r;
	int estado;
	float num1;
	float num2;


	printf("r vale:%f la direccion es %p\n",r,&r);

	//pedirFloatUsuario(&num1);
	//pedirFloatUsuario(&num2);

	//estado=pedirFloatUsuario(&num2,0.1,1000.0,reintentos);

	if(pedirFloatUsuario(&num1,0.0,1000.0,3/*REINTENTOS*/,"Ingrese numero","Error por el numero ingresado")==0)
	{
		printf("Ingresaste %f: ",num1);

		if(pedirFloatUsuario(&num2,0.1,1000.0,3/*REINTENTOS*/,"Ingrese divisor","Error de número ingresado")==0) //(el 0.1 permitiria que no deje ingresar un 0 como divisor)
		{
			printf("Ingresaste %f: ",num1);

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
			printf("ese numero noooo, no puedo seguir con el programa");
			//exit(0)
		}
	}
	else
	{
		printf("ese numero noooo, no puedo seguir con el programa");
		//exit(0);
	}



	return EXIT_SUCCESS;
}

//el tipo devuelve el tipo del return
int pedirFloatUsuario(float* pNum,float min,float max,int reintentos,char* variableTexto,char* mensajeError)
{
	float auxiliar;//guardara mi valor de numero pedido
	int estado=1;

	if(min<max)
	{
		for(int i=0;i<=reintentos;i++)
		{
			printf("%s",variableTexto/*"Ingrese un numero: \n"*/);
			scanf("%f",&auxiliar);
			//scanf("%f",pNum);

			if(auxiliar>=min && auxiliar<=max)
			{
				*pNum=auxiliar;
				estado=0; //en este caso el 0 es lo correcto.
				break; //para salir del for en caso de que el usuario haya dado por fin un dato valido.
						// el break, rompera el bucle mas cercano.
			}
			else
			{
				estado=1;
				printf("%s",mensajeError);
			}
		}
	}
	return estado;
}





// FORMATO FUNCION
int dividir(float a, float b, float* pResultado)
{
	float resultado;
	int estado;

	printf("a vale:%f b vale:%f pResultado : %p\n",a,b,pResultado);


	if(b!=0){
		resultado = a/b;
		estado=0; // OK

		//devuelvo resultado
		// escribir la variable externa, que no tengo acceso
		// pero tengo la direccion
		*pResultado = resultado; // escribiendo "r"
	}
	else
		estado=1; // ERROR


	return estado;
}

