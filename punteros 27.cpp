#include <iostream>
#include <stdio.h>

//usuario ingresa 10 numeros y debe imprimir mediante apuntadores la posicion de memoria y si el numero es par o impar
int main()
{
	for(int j=0;j<10;j++)
	{
		int num;
		printf("digite el valor %d: ",j+1);
		scanf("%i",&num);
		
		int *p_num;
		p_num = &num;
		
		if(*p_num%2==0)
		{
			printf("el numero %i es par", *p_num);
			printf("\n se encuentra alojado en: %p\n",(void *) &p_num);
			printf("\n");
		}
		else
		{
			printf("el numero %i es impar", *p_num);
			printf("\n se encuentra alojado en: %p\n",(void *) &p_num);
			printf("\n");
		}
	}
}


/*
// puntero

int main()
{
	int n = 4;
	int *p_n;
	p_n = &n; //iguala todo lo que esta dentro de las posiciones de la n
	
	printf("%p \n",(void *) &n); //p --> posicion de memoria 
	printf("%d \n",n);
	
	printf("%p \n",(void *) &p_n);  //posicion de memoria 
								   //void --> null
	printf("%i",*p_n); //valor asigando en el apuntador
}
*/
/*
int main()
{
	int n=1, j=2;
	int *p;
	p=&n;
	printf("n tiene el valor: %i, y esta alojado en: %p\n",n , (void *) &n);
	printf("j tiene el valor: %i, y esta alojado en: %p\n",j , (void *) &j);
	printf("p tiene el valor: %p, y esta alojado en: %p\n",p , (void *) &p);
	printf("el valor del entero al que apunta p es: %d\n",*p);
}
*/

/*
int main()
{
	//declaracion de variables
	int i=32;
	float f=2.53,*p1;
	char c= 'A',*p2;
	int *p;
	//punteros
	p=&i;
	p1=&f;
	p2=&c;
	//imprimir valores y alojamientos
	printf("i tiene el valor: %i, y esta alojado en: %p\n",i , (void *) &i);
	printf("f tiene el valor: %0.2f, y esta alojado en: %p\n",f , (void *) &f);
	printf("c tiene el valor: %c, y esta alojado en: %p\n",c , (void *) &c);
	
	printf("\n");
	
	printf("p tiene el valor: %p, y esta alojado en: %p\n",p , (void *) &p);
	printf("p1 tiene el valor: %p, y esta alojado en: %p\n",p1 , (void *) &p1);
	printf("p2 tiene el valor: %p, y esta alojado en: %p\n",p2 , (void *) &p2);
	
	printf("\n");
	
	//imprimir valores enteros de los punteros
	printf("el valor del entero al que apunta p es: %d\n",*p);
	printf("el valor del entero al que apunta p1 es: %0.2f\n",*p1);
	printf("el valor del entero al que apunta p2 es: %c\n",*p2);
}
*/


