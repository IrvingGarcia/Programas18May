/* Alumno: Irving Efren Garcia Ramos   */
/* E-mail: irvin.16@outlook.es         */
/* Fecha de Creaci�n: 14/05/2018       */
/* Fecha de actualizaci�n:             */
/* Descripci�n: Programa que imprima los
 n�meros del 1 al 100 e imprima la suma
 de los impares y los  pares           */

#include <stdio.h>
// Declaraci�n del prototipo de la funci�n sumaim_par()
int sumaimpar(int impares);
int sumapar(int pares);

int main(void)
{
    int pares=0;
    int impares=0;

     for (int i=1; i<=100; i++)
     {
         printf("%d\t",i);
     }

  printf("\nLa suma total de los pares es de: %d\t\t", Sumapar(pares));
  printf("La suma total de los impares es: %d\n", Sumaimpar(impares));

  return 0;

}

int Sumapar(int pares)
{
       for (int i=1; i<=100; i++)
       {
           if (i % 2 == 0)
           {
               pares += i;
           }
       }

       return pares;
}

int Sumaimpar(int impares)
{
       for (int i=1; i<=100; i++)
       {
          if (i % 2 == 1)
          {
             impares += i;
          }
       }

       return impares;
}
