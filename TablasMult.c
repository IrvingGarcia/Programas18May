/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Program que imprima
las tablas del  1 al 5               */

#include <stdio.h>
// Declaración del prototipo de la función Mult()
int Mult(int i, int j);

int main(void)
{
    int i;
    int j;

    for(i=1; i<=5; i++)
    {
        printf("La Tabla del %d es:\n", i);
        for(j=1; j<=10; j++)
        {
            printf("| %d * %d = %d |", i, j, Mult(i, j));
            printf("\n");
        }
    }
    return 0;
}

int Mult(int i, int j)
{
    return i*j;
}
