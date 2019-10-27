#include <stdio.h>
#include <stdlib.h>

/*
Autor: Kevin Fernando Navarro
Fecha: 10/26/19
Grupo: 008
Horario: Sabados 09:00 - 11:00
Matricula: 1618122
*/

typedef struct{
    char nombre[30];
    char sexo[1];
    int edad;
    float calificaciones[5];
    float promedio;
}Estudiante;

typedef struct{
  char nombre[30];
  float peso;
  int nacimiento;
  char sexo[1];
}Panda;

void LeerPanda(Panda p);
int EdadPanda(Panda p);
int TenerBebes(Panda p);

int main(int argc, char *argv[]) {
	//Actividad 1
	int cantidadAlumnos, cantidadPandas, i, x, indicePromedio, opcion = 0;
  float mayorPromedio[1] = {0};
	printf("Introduzca la cantidad de alumnos a ingresar: ");
	scanf("%d", &cantidadAlumnos);
	Estudiante estudiantes[cantidadAlumnos];

	for(i=0;i<cantidadAlumnos;i++){
        estudiantes[i].promedio = 0;
        printf("Ingrese el nombre del estudiante %d: ", i+1);
        gets();
        gets(estudiantes[i].nombre);
        printf("Ingrese el sexo del estudiante (M/F): ");
        gets(estudiantes[i].sexo);
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &estudiantes[i].edad);
        for(x=0; x<5;x++){
            printf("Introduzca la calificacion del examen %d:", x+1);
            scanf("%f", &estudiantes[i].calificaciones[x]);
            estudiantes[i].promedio += estudiantes[i].calificaciones[x];
        }
        estudiantes[i].promedio = estudiantes[i].promedio/5;
        if (estudiantes[i].promedio > mayorPromedio[0]){
          indicePromedio = i;
          mayorPromedio[0] = estudiantes[i].promedio;
        }
	}
  printf("El estudiante con mayor promedio es: %s con %f.\n", estudiantes[indicePromedio].nombre, mayorPromedio[0]);

  system("pause");
  printf("\n");

  //Actividad 2
  printf("Ingrese la cantidad de pandas en el zoologico: ");
  scanf("%d", &cantidadPandas);
  Panda pandas[cantidadPandas];
  getchar();

  for(i=0;i<cantidadPandas;i++){
    printf("Introduzca el nombre del panda %d: ", i+1);
    gets(pandas[i]);
    printf("Introduzca el peso del panda: ");
    scanf("%f", &pandas[i].peso);
    printf("Introduzca el anio de nacimiento: ");
    scanf("%d", &pandas[i].nacimiento);
    getchar();
    printf("Introduzca el sexo del panda (M/F): ");
    gets(pandas[i].sexo);
  }
    printf("\nLos datos de los pandas son: ");  
  for(i=0;i<cantidadPandas;i++){
    LeerPanda(pandas[i]);
  }

  return 0;
}

int EdadPanda(Panda p){
  return 2019-p.nacimiento;
}

int TenerBebes(Panda p){
  if(EdadPanda(p)>5 && p.sexo[0] == 'F')
    return 1;
  else
    return 0;
}

void LeerPanda(Panda p){
  printf("Panda: %s\n", p.nombre);
  printf("El peso del panda es: %f\n", p.peso);
  printf("La edad del panda es: %d\n", EdadPanda(p));
  printf("El panda puede tener hijos: ");
  if(TenerBebes(p) == 1)
    printf("Si\n");
  else
    printf("No\n");
}
