/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción:Pograma que imprima de
forma decreciente los numeros del 100-0 */

#include <stdio.h>
// Declaración del prototipo de la funcion decreciente()
int decreciente(int );

int main(void)
{
   int x;
   printf("\nEsta es la serie del 1 al 100 en forma decreciente:\n");

   printf("%d\t", decreciente(x));


    return 0;
}

int decreciente(int x)
{
  for(int x=100; x>=0; x--)
  {
      printf("%d\t", x);
  }

  return x;
}
