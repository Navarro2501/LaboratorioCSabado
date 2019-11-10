#include <stdio.h>

#define SIZE_NAME 30

typedef struct{
  char name[SIZE_NAME];
  int dateTime;
}picture_info;

int main(void) {
  //***************Actividad 1
  int i;
  picture_info pictures[5], *datosFotos[5];

  for(i=0;i<5;i++){
    printf("Introduzca el nombre de la foto: ");
    gets(pictures[i].name);
    printf("Introduzca la fecha: ");
    scanf("%d", &pictures[i].dateTime);
    getchar();
  }

  for(i=0;i<5;i++){
    datosFotos[i] = &pictures[i];
    printf("Foto %d:\nNombre: %s\nFecha: %d\n", i+1, datosFotos[i]->name, datosFotos[i]->dateTime);
  }

  //****************Actividad2
  /*
  Creo que si, el usar apuntadores traeria una ventaja ya que no trabajariamos con las variables en si, asi no tendriamos que cambiar sus valores de forma repetida para poder obtener el mismo resultado.
  */

  return 0;
}
