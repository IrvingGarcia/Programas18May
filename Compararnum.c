/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción:  Programa que indique
 de tres numeros dados por el usuario
 cual es mayor y cual es menor o si
 son iguales                         */

#include <stdio.h>

int Mayor(int n1, int n2, int n3);
int Menor(int n1, int n2, int n3);
int Igual(int n1, int n2, int n3);

int main(void)
{
   int n1,n2,n3;

   printf("\nIngrese el numero 1:\t");
   scanf("%d", &n1);

   printf("\nIngrese el numero 2:\t");
   scanf("%d", &n2);

   printf("\nIngrese el numero 3:\t");
   scanf("%d", &n3);

   if(n1!=n2 || n1!=n2)
   {
       printf("\nEl numero mayor es el: %d", Mayor(n1,n2,n3));
        printf("\nEl numero menor es el: %d", Menor(n1,n2,n3));
   }



    return 0;
}

int Mayor(int n1, int n2, int n3)
{
    int mayor;

    if(n1>n2 & n1>n2)
    {
         mayor=n1;
    }
    else if(n2>n1 && n2>n3)
    {
         mayor=n2;
    }
    else if(n3>n1 && n3>n2)
    {
         mayor=n3;
    }

    return mayor;
}

int Menor(int n1, int n2, int n3)
{
    int menor;

    if(n1<n2 & n1<n2)
    {
         menor=n1;
    }
    else if(n2<n1 && n2<n3)
    {
         menor=n2;
    }
    else if(n3<n1 && n3<n2)
    {
         menor=n3;
    }

    return menor;
}

int Igual(int n1, int n2, int n3)
{
    int igual;

    if(n1>n2 & n1>n2)
        igual=n1;

    return igual;
}
