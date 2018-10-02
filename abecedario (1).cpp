/*
Autor: Juan David Hoyos Ramirez
Fecha: 01/09/2018
Programa: Mostrar el abecedario por medio de punteros
*/
//funcion principal
#include <iostream>
#include <stdio.h>
//mensajes definidos
#define mensaje "\n\n                         EL ABECEDARIO ES: \n\n"
#define mensaje2 "\n\n Acontinuacion se mostrara el abecedario por medio de punteros \n\n"
//funcion de almacenamiento
int abecedario()
{
	//declaracion de variables
	char abecedario[26],*p;
	int j;
	p = &abecedario[26];//puntero
	printf(mensaje2);//mensaje de entrada
	printf(mensaje);//mensaje de salida
	//ciclo del abecedario
	for(j=0;j<26;j++)
	{
		abecedario[j]='a'+j;
		printf("%c \t",abecedario[j]);//imprime el abecedario
		
	}
	return 0;
} 
//funcion imprimir mensajes de posicion del vector
void imprimir()
{
	//declaracion de variables
	char abecedario[26],*p;
	//imprime los resultados
	printf("\n\n");
	printf("El abecedario esta alojado en: %p\n",abecedario, (void *) &abecedario);
	printf("p tiene el valor: %p, y esta alojado en: %p\n",p , (void *) &p);
}

int main()
{
	abecedario();
	imprimir();
}


