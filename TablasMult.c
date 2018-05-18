/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creaci�n: 14/05/2018     */
/* Fecha de actualizaci�n:           */
/* Descripci�n: Program que imprima
las tablas del  1 al 5               */

#include <stdio.h>
// Declaraci�n del prototipo de la funci�n Mult()
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
