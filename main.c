#include <stdio.h>
#include <stdlib.h>
/*
Autor: Kevin Fernando Navarro Garza
Fecha: 25/08/2019
Grupo: 008
Horario: Sábados 09:00 - 11:00
Matrícula: 1618122
*/
//Segunda modificación agregando la resolución a la segunda ecuación

int main(int argc, char *argv[]) {
	//Identificación del branch práctica 3		
	//Usamos dos variables, 'numero' para guardar el número, y 'resultado' para guardar el resultado.
	float numero, resultado;
	//Se le pide al usuario introduzca un número cualquiera.
	printf(" Introduzca un numero: ");
	//Se guarda el número dentro de la variable numero
	scanf("%f", &numero);
	//Se muestra el numero introducido
	printf("Ha introducido el número %f.\n", numero);
	//Se realiza el proceso para resolver la ecuación usando el orden de prioridades (paréntesis del más interno al más externo)
	resultado = ((numero - 1)/4) - ((numero - 5)/36);
	//Se imprime el resultado en pantalla
	printf("\n El resultado de la primera operacion ((x-1)/4)-((x-5)/36) es: %f.\n", resultado);
	//Se realiza el proceso para resolver la segunda ecuación ((x + 1) / 8)-((2 * x - 3) / 16) * 6 usando el orden de prioridades (paréntesis del más interno al más externo)
	resultado = ((numero + 1) / 8) - ((2 * numero - 3) / 16) * 6;
	printf(" El resultado de la segunda operacion ((x + 1) / 8)-((2 * x - 3) / 16) * 6 es %f\n", resultado);
	return 0;
}
