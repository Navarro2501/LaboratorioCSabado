#include <stdio.h>
#include <stdlib.h>

/*
Autor: Kevin Fernando Navarro
Fecha: 2/11/19
Grupo: 008
Horario: Sabados 09:00 - 11:00
Matricula: 1618122
*/

int contarVocales (char palabra[]);

int main(int argc, char *argv[]) {
  //Actividad 1
  int *a, *b, x, y;
  char cadena[30], *p;

  printf("Introduzca una palabra: ");
  fgets(cadena, sizeof(cadena), stdin );
  p = &cadena[0];
  printf("La cantidad de vocales es: %d.", contarVocales(p));
  
  system("pause");

  //Actividad 2
  printf("\n\nIntroduzca un numero: ");
  scanf("%d", &x);
  printf("Introduzca otro numero: ");
  scanf("%d", &y);

  a = &x;
  b = &y;

  printf("La suma de ambos numeros es %d.", *a + *b);

	return 0;
}
