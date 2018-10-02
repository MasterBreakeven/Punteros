/*
Autor: Juan David Hoyos Ramirez
Fecha: 30/09/2018
Programa: Mostrar el abecedario por medio de punteros
*/
#include <stdio.h> 
#include<conio.h> 
#define mensaje "\n\n EL ABECEDARIO ES: \n\n"

//Funcion donde almacena el abecedario
int abecedario ()
{
	char abe,*p; //declaracion de variables
	p=&abe; //puntero
	printf(mensaje);//mensaje de salida
	//Ciclo del abecedario
	for(abe='a';abe<='z';abe++) 
	{
		printf("%c\t",*p); //imprime el abecedario
	}
}
//funcion principal
int main()
{
	abecedario();//llamado de la funcion
}
