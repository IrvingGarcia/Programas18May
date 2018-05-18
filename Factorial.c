/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que  calcule
 el  factorial de un numero dado por
 el usuario                         */

#include <stdio.h>
// Declarando el prototipo de Facrorial()
int Factorial(int , int );

int main(void)
{
   int num;
   int factorial=1;

   printf("\nIngrese un numero: ");
   scanf("%d", &num);

   printf("\nEl factorial de %d es: %d", num, Factorial(factorial,num));


    return 0;
}

int Factorial(int factorial, int  num)
{
     for(int i=1; i<=num; i++)
     {
         factorial=factorial*i;
     }

     return factorial;
}
