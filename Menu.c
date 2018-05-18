/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que imprima
 un menu                             */

#include <stdio.h>
#include <ctype.h>

enum _MENU{Ingresar=1,Mostrar,Actualizar,Eliminar,Salir};
void Menu(char opcion);

int main(void)
{
   char opcion;

   printf("\tMenu Principal\t");
   printf("\n1. Ingresar");
   printf("\n2. Mostrar");
   printf("\n3. Actualizar");
   printf("\n4. Eliminar");
   printf("\n5. Salir");


   printf("\nIntroduzca la opcion deseada: ");
   scanf("%s",&opcion);

   void Menu(opcion);

   return 0;
}

void Menu(char opcion)
{
     do{
        while (getchar() != '\n'){
          switch(opcion){
             case Ingresar:
                  printf("\nUsted se encuentra en la opcion ingresar");
              break;

             case Mostrar:
                  printf("\nUsted se encuentra en la opcion mostrar");
              break;

             case Actualizar:
                  printf("\nUsted se encuentra en la opcion actualizar");
               break;

             case Eliminar:
                 printf("\nUsted se encuentra en la opcion eliminar !cuidado¡");
               break;

             case Salir:
               break;
          }

        }

   }while(opcion != 5);
}
