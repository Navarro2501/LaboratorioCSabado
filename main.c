#include <stdio.h>
#include <stdlib.h>
/*
*Autor: Kevin Fernando Navarro Garza
*Fecha: 31/08/2019
*grupo: 008
*Horario: Sábados 09:00 - 11:00
*Matrícula: 1618122
*/

//Práctica 3 (Sentencias if/else)

int main(int argc, char *argv[]) {
	int a, b, c;
	//**************************************************************************************************************
	//Actividad 1: Introduzca dos números por teclado e imprima el número más grande
	printf("Practica3\n\nProceso 1: Introducir dos numeros por teclado e imprimir el numero mas grande\n");
	printf("Introduzca el primer numero: ");
	scanf("%d", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%d", &b);
	//Se evalúa si el primer número es mayor que el segundo (a>b)
	if(a>b)
		printf("El primer numero es mayor que el segundo: (%d > %d)\n", a, b);
	//En caso de que el segundo número sea mayor (b>a), imprime lo contenido en else
	else
		printf("El segundo numero es mayor que el primero: (%d > %d)\n", b, a);
	system("pause");
	
	//**************************************************************************************************************
	/*
	Actividad 2: Crear un programa que declare 3 variables de tipo entero con valores A=5, B=3, C=-12
	y muestre si se cumplen o no las siguientes condiciones usando if/else:
	A>3
	A>C
	B!=C
	A==3
	A*B==15
	C/B<A
	C/B==-10
	A+B+C==5
	(A+B==8)&&(A-B==2)
	(A+B==8)||(A-B==6)
	(A>3&&B>&&C>3)
	*/
	printf("\n\nProceso 2: Evaluar con tres variables de tipo entero con valor a=5, b=3, c=-12\nlas condiciones presentadas a continuacion:\n\n");
	//Se asigna el valor a las variables correspondientes para proceder a la evaluación de las condiciones.
	a=5;
	b=3;
	c=-12;
	
	//Primer condicion (a>3)
	printf("Primer condicion: (a>3)\n");
	if(a>3)
		printf("a>3 (a=%d)\n\n", a);
	else 
		printf("a<3 (a=%d)\n\n", a);
		
	//Se evalua la segunda condicion (a>c)
	printf("Segunda condicion (a>c)\n");
	if(a>c)
		printf("a>c (%d>%d)\n\n", a, c);
	else
		printf("a<c (%d<%d)\n\n", c, a);
		
	//Se evalua la tercera condicion (b!=c)
	printf("Tercer condicion (b!=c)\n");
	if(b!=c)
		printf("b es diferente de c (%d!=%d)\n\n", b, c);
	else
		printf("b no es diferente de c (%d==%d)\n\n", b, c);
		
	//Se evalua la cuarta condicion (a==3)
	printf("Cuarta condicion (a==3)\n");
	if(a==3)
		printf("a es igual a 3 (%d==3)\n\n", a);
	else
		printf("a es diferente de 3 (%d!=3)\n\n", a);
		
	//Se evalua la quinta condicion (a*b==15)
	printf("Quinta condicion (a*b==15)\n");
	if(a*b==15)
		printf("El producto de a multiplicado por b es 15 (%d*%d==15)\n\n", a, b);
	else
		printf("El producto de a multiplicado por b es diferente de 15 (%d*%d!=15)\n\n", a,b);
	
	//Se evalua la sexta condicion (c/b<a)
	printf("Sexta condicion (c/b<a)\n");
	if(c/b<a)
		printf("c dividido entre b es menor que a (%d/%d<%d)\n\n", c, b, a);
	else
		printf("c dividido entre b es mayor que a (%d/%d>a)\n\n", c, b, a);
	
	//Se evalua la séptima condicion (c/b==-10)
	printf("Septima condicion (c/b==-10)\n");
	if(c/b==-10)
		printf("c dividido entre b es igual a -10 (%d/%d==-10)\n\n", c, b);
	else
		printf("c dividido entre b es diferente de -10 (%d/%d!=10)\n\n", c, b);
		
	//Se evalua la octava condicion (a+b+c==5)   
	printf("Octava condicion (a+b+c==5)\n");
	if(a+b+c==5)
		printf("El resultado de la suma de a + b + c es igual a 15 (%d+%d+%d==15)\n\n", a, b, c);
	else
		printf("El resultado de la suma de a + b + c es diferente de 15 (%d+%d+%d!=15)\n\n", a, b, c);
	
	//Se evalua la novena condicion (a+b==8)&&(a-b==2)
	printf("Novena condicion (a+b==8) && (a-b==-2).\nEn caso de que alguna de ambas sea falsa, el resultado es falso\n");
	if(a+b==8 && a-b==2)
		printf("Tanto a+b==8 y a-b==2 son ciertas: (%d+%d==8 && %d-%d==2)\n\n", a, b, a, b);
	else
		printf("Una o más condiciones son falsas: (%d+%d!=8 o %d-%d!=2)\n\n", a, b, a, b);
	
	//Se evalua la decima condicion (a+b==8)||(a-b==6)
	printf("Decima condicion (a+b==8 || a-b==6).\nEn caso de que alguna de ambas sea cierta, el resultado es cierto\n");
	if(a+b==8 || a-b==6)
		printf("Al menos una de las condiciones es cierta: (%d+%d==8 y/o %d-%d==6)\n\n", a, b, a, b);
	else
		printf("Ninguna de ambas condiciones es cierta: (%d+%d!=8 y %d-%d!=6)\n\n", a, b, a, b);
	
	//Se evalua la onceava condicion (a>3&&b>3&&c<3)
	printf("Onceava condicion (a>3 && b>3 && c<3)\nSi alguna de las tres condiciones es falsa, el resultado es falso.\n");
	if(a>3 && b>3 && c<3)
		printf("Las tres condiciones son ciertas: (%d>3 && %d>3&& %d<3)\n\n", a, b, c);
	else
		printf("Alguna de las tres condiciones es falsa: (%d>3 o %d>3 o %d<3)\n\n", a, b, c);
	system("pause");	
	
	//****************************************************************************************************
	//Actividad extra: repetir la actividad 2, esta vez introduciendo los datos por teclado.
	printf("Actividad extra: repetir la actividad 2, introduciendo los datos por teclado.\n\n");
	printf("Introduzca el primer numero (a): ");
	scanf("%d", &a);
	printf("Introduzca el segundo numero (b): ");
	scanf("%d", &b);
	printf("Introduzca el tercer numero: (c): ");
	scanf("%d", &c);
	//Primer condicion (a>3)
	printf("\nPrimer condicion: (a>3)\n");
	if(a>3)
		printf("a>3 (a=%d)\n\n", a);
	else 
		printf("a<3 (a=%d)\n\n", a);
		
	//Se evalua la segunda condicion (a>c)
	printf("Segunda condicion (a>c)\n");
	if(a>c)
		printf("a>c (%d>%d)\n\n", a, c);
	else
		printf("a<c (%d<%d)\n\n", a, c);
		
	//Se evalua la tercera condicion (b!=c)
	printf("Tercer condicion (b!=c)\n");
	if(b!=c)
		printf("b es diferente de c (%d!=%d)\n\n", b, c);
	else
		printf("b no es diferente de c (%d==%d)\n\n", b, c);
		
	//Se evalua la cuarta condicion (a==3)
	printf("Cuarta condicion (a==3)\n");
	if(a==3)
		printf("a es igual a 3 (%d==3)\n\n", a);
	else
		printf("a es diferente de 3 (%d!=3)\n\n", a);
		
	//Se evalua la quinta condicion (a*b==15)
	printf("Quinta condicion (a*b==15)\n");
	if(a*b==15)
		printf("El producto de a multiplicado por b es 15 (%d*%d==15)\n\n", a, b);
	else
		printf("El producto de a multiplicado por b es diferente de 15 (%d*%d!=15)\n\n", a,b);
	
	//Se evalua la sexta condicion (c/b<a)
	printf("Sexta condicion (c/b<a)\n");
	if(c/b<a)
		printf("c dividido entre b es menor que a (%d/%d<%d)\n\n", c, b, a);
	else
		printf("c dividido entre b es mayor que a (%d/%d>%d)\n\n", c, b, a);
	
	//Se evalua la séptima condicion (c/b==-10)
	printf("Septima condicion (c/b==-10)\n");
	if(c/b==-10)
		printf("c dividido entre b es igual a -10 (%d/%d==-10)\n\n", c, b);
	else
		printf("c dividido entre b es diferente de -10 (%d/%d!=10)\n\n", c, b);
		
	//Se evalua la octava condicion (a+b+c==5)   
	printf("Octava condicion (a+b+c==5)\n");
	if(a+b+c==5)
		printf("El resultado de la suma de a + b + c es igual a 15 (%d+%d+%d==15)\n\n", a, b, c);
	else
		printf("El resultado de la suma de a + b + c es diferente de 15 (%d+%d+%d!=15)\n\n", a, b, c);
	
	//Se evalua la novena condicion (a+b==8)&&(a-b==2)
	printf("Novena condicion (a+b==8) && (a-b==-2).\nEn caso de que alguna de ambas sea falsa, el resultado es falso\n");
	if(a+b==8 && a-b==2)
		printf("Tanto a+b==8 y a-b==2 son ciertas: (%d+%d==8 && %d-%d==2)\n\n", a, b, a, b);
	else
		printf("Una o más condiciones son falsas: (%d+%d!=8 o %d-%d!=2)\n\n", a, b, a, b);
	
	//Se evalua la decima condicion (a+b==8)||(a-b==6)
	printf("Decima condicion (a+b==8 || a-b==6).\nEn caso de que alguna de ambas sea cierta, el resultado es cierto\n");
	if(a+b==8 || a-b==6)
		printf("Al menos una de las condiciones es cierta: (%d+%d==8 y/o %d-%d==6)\n\n", a, b, a, b);
	else
		printf("Ninguna de ambas condiciones es cierta: (%d+%d!=8 y %d-%d!=6)\n\n", a, b, a, b);
	
	//Se evalua la onceava condicion (a>3&&b>3&&c<3)
	printf("Onceava condicion (a>3 && b>3 && c<3)\nSi alguna de las tres condiciones es falsa, el resultado es falso.\n");
	if(a>3 && b>3 && c<3)
		printf("Las tres condiciones son ciertas: (%d>3 && %d>3&& %d<3)\n\n", a, b, c);
	else
		printf("Alguna de las tres condiciones es falsa: (%d>3 o %d>3 o %d<3)\n\n", a, b, c);
	system("pause");	
	return 0;
}
