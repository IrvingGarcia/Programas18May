/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creaci�n: 14/05/2018     */
/* Fecha de actualizaci�n:           */
/* Descripci�n: Programa que indica
cual numero es mayor con arreglos    */
#include <stdio.h>

#define TAM 3

int Menor(int );

int main(void)
{
    int i;
    int num;
    int array[TAM];

    for(i=0; i<TAM; i++)
    {
        printf("\nIngrese el numero %d\t", i+1);
        scanf("%d", &num);

        array[i]= num;
    }

     printf("\nEl numero mayor es: %d", Menor(i));


    return 0;
}

int Menor(int i)
{
     int menor=0;
     int array[i];

     if(array[i]<array[i+1] && array[i]<array[i+2])
     {
           menor = array[i];

     }
     else if(array[i+1]<array[i] && array[i+1]<array[i+2])
     {
           menor = array[i+1];
     }
     else if(array[i+2]<array[i] && array[i+2]<array[i+1])
     {
           menor = array[i+2];
     }
     return menor;
}
