/*
Autor: Juan David Hoyos Ramirez
Fecha: 30/09/2018
Programa: Mostrar el abecedario por medio de punteros
*/
#include <iostream>
#include <stdio.h>
//funcion principal
int main()
{
	//declaracion de variables
	char a='a',b='b',c='c',d='d',e='e',f='f',g='g',h='h',i='i',j='j',k='k',l='l';
	char m='m',n='n',o='o',p='p',q='q',r='r',s='s',t='t',u='u',v='v',w='w',x='x';
	char y='y',z='z';
	char *pa,*pb,*pc,*pd,*pe,*pf,*pg,*ph,*pi,*pj,*pk,*pl,*pm,*pn,*po,*pp,*pq,*pr,*ps,*pt,*pu,*pv,*pw,*px,*py,*pz;
	//punteros
	pa=&a;
	pb=&b;
	pc=&c;
	pd=&d;
	pe=&e;
	pf=&f;
	pg=&g;
	ph=&h;
	pi=&i;
	pj=&j;
	pk=&k;
	pl=&l;
	pm=&m;
	pn=&n;
	po=&o;
	pp=&p;
	pq=&q;
	pr=&r;
	ps=&s;
	pt=&t;
	pu=&u;
	pv=&v;
	pw=&w;
	px=&x;
	py=&y;
	pz=&z;
//imprime el abecedario por medio de los punteros independientes
	printf("\n");
	printf("el valor al que apunta pa es: %c\n",*pa);
	printf("el valor al que apunta pb es: %c\n",*pb);
	printf("el valor al que apunta pc es: %c\n",*pc);
	printf("el valor al que apunta pd es: %c\n",*pd);
	printf("el valor al que apunta pe es: %c\n",*pe);
	printf("el valor al que apunta pf es: %c\n",*pf);
	printf("el valor al que apunta pg es: %c\n",*pg);
	printf("el valor al que apunta ph es: %c\n",*ph);
	printf("el valor al que apunta pi es: %c\n",*pi);
	printf("el valor al que apunta pj es: %c\n",*pj);
	printf("el valor al que apunta pk es: %c\n",*pk);
	printf("el valor al que apunta pl es: %c\n",*pl);
	printf("el valor al que apunta pm es: %c\n",*pm);
	printf("el valor al que apunta pn es: %c\n",*pn);
	printf("el valor al que apunta po es: %c\n",*po);
	printf("el valor al que apunta pp es: %c\n",*pp);
	printf("el valor al que apunta pq es: %c\n",*pq);
	printf("el valor al que apunta pr es: %c\n",*pr);
	printf("el valor al que apunta ps es: %c\n",*ps);
	printf("el valor al que apunta pt es: %c\n",*pt);
	printf("el valor al que apunta pu es: %c\n",*pu);
	printf("el valor al que apunta pw es: %c\n",*pw);
	printf("el valor al que apunta px es: %c\n",*px);
	printf("el valor al que apunta py es: %c\n",*py);
	printf("el valor al que apunta pz es: %c\n",*pz);
	return 0;
}

