#include <stdio.h>
#include <stdlib.h>
/*
Autor: Kevin Fernando Navarro Garza
Fecha: 25/08/2019
Grupo: 008
Horario: S�bados 09:00 - 11:00
Matr�cula: 1618122
*/

int main(int argc, char *argv[]) {
	//Identificaci�n del branch pr�ctica 3
	//Usamos dos variables, 'numero' para guardar el n�mero, y 'resultado' para guardar el resultado.
	float numero, resultado;
	//Se le pide al usuario introduzca un n�mero cualquiera.
	printf(" Introduzca un numero: ");
	//Se guarda el n�mero dentro de la variable numero
	scanf("%f", &numero);
	//Se muestra el numero introducido
	printf("Ha introducido el n�mero %f.\n", numero);
	//Se realiza el proceso para resolver la ecuaci�n usando el orden de prioridades (par�ntesis del m�s interno al m�s externo)
	resultado = ((numero - 1)/4) - ((numero - 5)/36);
	//Se imprime el resultado en pantalla
	printf("\n El resultado de la primera operacion ((x-1)/4)-((x-5)/36) es: %f.", resultado);
	return 0;
}
