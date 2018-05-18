/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que imprima
la tabla del 1                       */

#include <stdio.h>
//Declaracion del prototipo de la funcion Mult()

int Mult(int num, int i);

int main(void)
{
    int num = 1;
    int i;

    printf("\n\tLa Tabla de Multiplicar del %d es:\n", num);

    for (i=1; i<=10; i++)
    {
        printf("\n %d * %d = %d", num, i, Mult(num,i));
    }

    return 0;
}

int Mult(int num, int i)
{
    return i*num;
}
