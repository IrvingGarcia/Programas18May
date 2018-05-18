/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que convierta
 una cadena de mayuscula a minuscula
 la imprima                          */

#include <stdio.h>

#define TAM 10
void ConvertMay_Min(char array[TAM]);

int main(void)
{
     char array[TAM];
     printf("\nIngrese la palabra que desea convertir: ");
     scanf("%s", &array);

     ConvertMay_Min(array);

     return 0;
}

void ConvertMay_Min(char array[TAM])
{
     for (int i=0; i<TAM-1; i++)
     {
           array[i] = array[i]+32;
     }
     printf("%s", array);
}
