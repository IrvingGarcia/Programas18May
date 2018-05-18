/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que convierta
 una cadena de minuscula a mayuscula y
 la imprima                          */

#include <stdio.h>

#define TAM 10
void ConvertMin_May(char array[TAM]);

int main(void)
{
     char array[TAM];
     printf("\nIngrese la palabra que desea convertir: ");
     scanf("%s", &array);

     ConvertMin_May(array);

     return 0;
}

void ConvertMin_May(char array[TAM])
{
     for (int i=0; i<TAM-1; i++)
     {
           array[i] = array[i]-32;
     }
     printf("%s", array);
}
