#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//*******************************************************************************ACTIVIDAD 1********************************************************************
	float promedio = 0, calificacion;
	int i;
	for(i=0;i<10;i++){
		printf(" Escriba la calificacion del examen %d: ", i+1);
		scanf("%f", &calificacion);
		promedio = promedio + calificacion;
	}
	promedio=promedio/10;
	printf("\n El promedio final es: %f\n", promedio);
	if(promedio>7)
		printf(" Aprobado.\n ");
	else
		printf(" Reprobado.\n ");
	system("pause");
	//******************************************************************************ACTIVIDAD 2*********************************************************************
	int base, potencia;
	long int suma = 1;
	printf("\n\n Introduzca el numero base: ");
	scanf("%d", &base);
	printf(" Introduzca la potencia a la que desea elevarlo: ");
	scanf("%d", &potencia);
	if(potencia==0)
		printf("El resultado es 1.\n");
	else if(base==0)
		printf("El resultado es 0.\n");
	else if(potencia>0){
		for(i=0;i<potencia;i++){
			suma = suma * base;
		}
		printf(" El resultado de %d^%d = %d\n ", base, potencia, suma);
	}
	system("pause");
	return 0;	
}
