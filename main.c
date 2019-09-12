#include <stdio.h>
#include <stdlib.h>
/*
*Autor: Kevin Fernando Navarro Garza
*Fecha: 12/09/19
*Grupo: 008
*Horario: Sabados 09:00 - 11:00
*Matrícula: 1618122
*/
int main(int argc, char *argv[]) {
	float nota;
	int dia;
	//********************************************ACTIVIDAD 1******************************************************
	printf("Introduzca la calificacion: ");
	scanf("%f", &nota);
	//Se realiza la evaluacion de la variable nota, primero para validar (si nota < 0 o nota >10)
	//Y después se reaiza la evaluación dentro de un if else.
	if(nota < 0 || nota > 10){
		printf("ERROR: Nota incorrecta\n\n");
	}else if(nota >= 5 && nota <= 10){
		printf("APTO\n\n");
	}else
		printf("NO APTO\n\n");
	system("pause");
	//*********************************************ACTIVIDAD 2*******************************************************
	printf("\n\nIntroduzca un numero de dia de la semana: ");
	scanf("%d", &dia);
	//Se evalua la variable dia primero para validar si es mayor a 7 o menor a 0
	//Despues se evalua contra cada numero de dia de la semana.
	if(dia < 1 || dia > 7)
		printf("ERROR: Dia incorrecto.\n\n");
	else if(dia==1)
		printf("Lunes\n\n");
	else if(dia==2)
		printf("Martes\n\n");
	else if(dia==3)
		printf("Miercoles\n\n");
	else if(dia==4)
		printf("Jueves\n\n");
	else if(dia==5)
		printf("Viernes\n\n");
	else if(dia==6)
		printf("Sabado\n\n");
	else if(dia==7)
		printf("Domingo\n\n");
	system("pause");
	//*********************************************ACTIVIDAD EXTRA*******************************************************
	printf("\n\nElija una opcion:\n1. Lunes\n2. Martes\n3. Miercoles\n4. Jueves\n5. Viernes\n6. Sabado\n7. Domingo\nOpcion: ");
	scanf("%d", &dia);
	//Se evalua la variable dia primero para validar si es mayor a 7 o menor a 0
	//Despues se evalua contra cada numero de dia de la semana.
	if(dia < 1 || dia > 7)
		printf("ERROR: Opcion incorrecta.\n\n");
	else if(dia==1)
		printf("Usted escogio la opcion %d\n\n", dia);
	else if(dia==2)
		printf("Usted escogio la opcion %d\n\n", dia);
	else if(dia==3)
		printf("Usted escogio la opcion %d\n\n", dia);
	else if(dia==4)
		printf("Usted escogio la opcion %d\n\n", dia);
	else if(dia==5)
		printf("Usted escogio la opcion %d\n\n", dia);
	else if(dia==6)
		printf("Usted escogio la opcion %d\n\n", dia);
	else if(dia==7)
		printf("Usted escogio la opcion %d\n\n", dia);
	system("pause");
	return 0;
}
