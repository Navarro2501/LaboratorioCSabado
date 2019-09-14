#include <stdio.h>
#include <stdlib.h>
/*
*Autor: Kevin Fernando Navarro Garza
*Fecha 14/09/19
*Grupo: 008
*Horario: sábado 09:00 - 11:00
*Matrícula: 1618122
*/
int main(int argc, char *argv[]) {
	//Se crean las variables para la toma y suma de datos, así como para recorrer el arreglo de la segunda actividad.
	int i, dato, suma=0;
	char paso=0;
	int lista[100];
	
	//********************************************************ACTIVIDAD 1*************************************************
	//Usamos un do-while ya que el proceso tiene que realizarse al menos una vez.
	do{
		printf("Introduzca un numero: ");
		scanf("%d", &dato);
		//Se procede a usar suma como una variable acumuladora de la suma de todos los datos que pueden ser introducidos.
		suma += dato;
		printf("Desea introducir otro numero? (s/n) ");
		//Usamos getch() para asignar el caracter introducido (s/n)
		paso = getch();
		printf("\n");
	}while(paso!='n');
	printf("\nLa suma de los numeros introducidos es: %d\n\n", suma);
	system("pause");
	printf("\n");
	//*********************************************************ACTIVIDAD 2************************************************
	//Una vez más, utilizamos la estructura do-while ya que el usuario tiene que realizar el proceso al menos una vez.
	//Iniciamos con el valor de suma en 0, que nos servirá para ir recorriendo el arreglo y asignar los valores en orden.
	suma = 0;
	
	do{
		printf("Introduzca un numero: ");
		scanf("%d", &dato);
		//Evaluamos si el dato introducido es menor a 100, de ser asi lo asignamos al arreglo y aumentamos el valor de suma
		//para así asignar el siguiente valor en la iteración siguiente.
		if(dato<100){	
			lista[suma]=dato;		
			suma++;
		}		
	}while(dato<100);
	
	printf("\nLa lista de los numeros que introdujo es: ");
	
	//Usamos una estructura for para recorrer e imprimir la lista de los numeros introducidos al arreglo.
	for(i=0;i<suma;i++){
		printf("\n %d", lista[i]);
	}
	printf("\n %d\n\n", dato);
	
	system("pause");
	return 0;
}
