/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creaci�n: 14/05/2018     */
/* Fecha de actualizaci�n:           */
/* Descripci�n: Programa que indica
que numero es mayor con arreglos     */
#include <stdio.h>

#define TAM 3

int mayor = 0;
int Mayor(int );

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

     printf("\nEl numero mayor es: %d", Mayor(mayor));


    return 0;
}

int Mayor(int mayor)
{
     int array[i];

     mayor = array[0];

     for (int i=1; i<TAM; i++)
     {
       if(mayor < array[i])
         {
            mayor = array[i];
         }
      }

     return mayor;
}
