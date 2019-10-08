#include <stdio.h>
/*
Autor: Kevin Fernando Navarro
Fecha: 10/07/19
Grupo: 008
Horario: Sabados 09:00 - 11:00
Matricula: 1618122
*/

int main(void) {
  int ventasEmpleadoOficinaEdificio[6][10][2];
  ventasEmpleadoOficinaEdificio[2][6][1] = 4234;
  printf("El empleado numero 3 de la oficina numero 7 del edificio número 2 ha vendido %d unidades.\n\n", ventasEmpleadoOficinaEdificio[2][6][1]);

  //El Array esta compuesto por 120 elementos
  //En dado caso se muestra un error ya que tal direccion no existe

  ventasEmpleadoOficinaEdificio[2][6][1] = 4234 + 10;
  printf("El empleado numero 3 de la oficina numero 7 del edificio número 2 ha vendido %d unidades.\n", ventasEmpleadoOficinaEdificio[2][6][1]);
  return 0;
}
