/* Alumno: Irving Efren Garcia Ramos   */
/* E-mail: irvin.16@outlook.es         */
/* Fecha de Creación: 14/05/2018       */
/* Fecha de actualización:             */
/* Descripción: Programa que determine
 si una persona puede votar en las
 proximas elecciones basado en su edad */

#include <stdio.h>

// Declaracion del prototipo de la funcion votar
int votar(int edad);

int main(void)
{
   int edad;

   printf("\nIngrese su edad actualmente: ");
   scanf("%d", &edad);

   if(edad >= 18)
   {
       printf("\nUsted tiene %d anios, si puede votar", votar(edad));
   }
   else
   {
       printf("\nUsted tiene %d anios, todavia no puede votar", votar(edad));
   }

    return 0;
}


int  votar(int edad)
{
    return edad;
}
