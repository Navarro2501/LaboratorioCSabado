#include <stdio.h>
#include <stdlib.h>
/*
Autor: Kevin Fernando Navarro Garza
Fecha: 25/08/2019
Grupo: 008
Horario: S�bados 09:00 - 11:00
Matr�cula: 1618122
*/
//Tercera modificaci�n agregando la resoluci�n de la tercera ecuaci�n

int main(int argc, char *argv[]) {
	//Identificaci�n del branch pr�ctica 3		
	
	//Usamos dos variables, 'numero' para guardar el n�mero, y 'resultado' para guardar el resultado.
	float numero, resultado;
	float x =2/3;
	
	//Se le pide al usuario introduzca un n�mero cualquiera.
	printf(" Introduzca un numero: ");
	
	//Se guarda el n�mero dentro de la variable numero
	scanf("%f", &numero);
	
	//Se muestra el numero introducido
	printf("Ha introducido el numero %f.\n", numero);
	
	//Se realiza el proceso para resolver la ecuaci�n usando el orden de prioridades (par�ntesis del m�s interno al m�s externo)
	resultado = ((numero - 1)/4) - ((numero - 5)/36);
	
	//Se imprime el resultado en pantalla
	printf("\n El resultado de la primera operacion ((x-1)/4)-((x-5)/36) es: %f.\n", resultado);
	
	/*Se realiza el proceso para resolver la segunda ecuaci�n ((x + 1) / 8)-((2 * x - 3) / 16) * 6
	  usando el orden de prioridades (par�ntesis del m�s interno al m�s externo)*/
	resultado = ((numero + 1) / 8) - ((2 * numero - 3) / 16) * 6;
	printf(" El resultado de la segunda operacion ((x + 1) / 8)-((2 * x - 3) / 16) * 6 es %f\n", resultado);	
	
	/*Se realiza el proceso para resolver la tercera ecuaci�n
	  (2 / 3) * (x - (1 - ((x - 2) / 3))) + 1 
	  usando el orden de prioridades (par�ntesis del m�s interno al m�s externo)
	*/
	resultado =0.666666666 * (numero - (1 - ((numero - 2) / 3))) + 1;
	printf(" El resultado de la tercera operacion (2 / 3) * (x - (1 - ((x - 2) / 3))) + 1 es %f\n", resultado);
	
	/*Se realiza el proceso para resolver la cuarta ecuaci�n
	  2 - ((-2 * x + 1 * -2) - ((x - 3) / 2))
	  usando el orden de prioridades (par�ntesis del m�s interno al m�s externo)
	*/
	resultado = 2 - ((-2 * numero + 1 * -2) - ((numero - 3) / 2));
	printf(" El resultado de la cuarta operaci�n 2 - ((-2 * x + 1 * -2) - ((x - 3) / 2)) es %f\n", resultado);
	return 0;
}
