/*
 * utn.biblioteca.h
 *
 *  Created on: 9 sep. 2021
 *      Author: Leo
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef UTN_BIBLIOTECA_H_
#define UTN_BIBLIOTECA_H_

int pedirFloatUsuario(float* pNum,float min,float max,int reintentos,char* variableTexto,char* mensajeError);
int pedirCharUsuario(char* pChar,char min,char max,int reintentos,char* variableTexto,char* mensajeError);
int pedirIntUsuario(int* pNumInt,float min,float max,int reintentos,char* variableTexto,char* mensajeError);


#endif /* UTN_BIBLIOTECA_H_ */
