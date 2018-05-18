/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creaci�n: 14/05/2018     */
/* Fecha de actualizaci�n:           */
/* Descripci�n: Programa que indica
que numero es mayor y cual menor de
tres numeros ingresados por el usuario,
o si los numeros son iguales         */

#include <stdio.h>

#define TAM 3

int Igual(int );
int Menor(int );
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

     if(array[TAM]!=array[TAM+1] && array[TAM]!=array[TAM+2])
     {
         printf("\nEl numero mayor es: %d", Mayor(i));
         printf("\nEl numero menor es: %d", Menor(i));
     }
     else
     {
         printf("\nEl numero %d es igual a los demas", Igual(i));
     }


    return 0;
}

int Igual(int i)
{
     int Igual=0;
     int array[i];

     if(array[i]==array[i+1] && array[i]==array[i+2])
     {
         Igual = array[i];

         return Igual;
     }
}

int Mayor(int i)
{
     int Mayor=0;
     int array[i];

     while(Mayor==0)
     {
         if(array[i]>array[i+1] && array[i]>array[i+2])
         {
             Mayor = array[i];

         }
         else if(array[i+1]>array[i] && array[i+1]>array[i+2])
         {
             Mayor = array[i+1];
         }
         else if(array[i+2]>array[i] && array[i+2]>array[i+1])
         {
              Mayor = array[i+2];
         }
     }
         return Mayor;
}

int Menor(int i)
{
     int Menor;
     int array[i];

     while(Menor==0)
     {
          if(array[i]>array[i+1] && array[i]>array[i+2])
          {
              Menor= array[i];
          }
          else if(array[i+1]>array[i] && array[i+1]>array[i+2])
          {
              Menor=array[i+1];
          }
          else if(array[i+2]>array[i] && array[i+2]>array[i+1])
          {
               Menor=array[i+2];
          }
     }
     return Menor;
}
