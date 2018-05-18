/* Alumno: Irving Efren Garcia Ramos   */
/* E-mail: irvin.16@outlook.es         */
/* Fecha de Creación: 14/05/2018       */
/* Fecha de actualización:             */
/* Descripción: Programa que imprima la
suma total de los 100 primeros números */

#include <stdio.h>
// Declaración del prototipo de la funcion suma()
int Suma(int x, int suma);

int main(void)
{
    int suma=0;
    int x;

    printf("La suma total de los 100 primeros numeros es: %d\n", Suma(x,suma));

    return 0;
}

int Suma(int x, int suma)
{
    for(x=1; x<=100; x++)
    {
       suma += x;
    }
    return suma;
}
