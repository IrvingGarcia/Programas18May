/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción:                      */

#include <stdio.h>

#define Met_Lit 1000
// Declarando el prototipo de la funcion volumen
float volumenLitro(float ancho, float largo, float altura);

int main(void)
{
    float ancho;
    float largo;
    float altura;


    printf("\nIngrese el ancho del  tanque a construir: ");
    scanf("%f", &ancho);

    printf("\nIngrese el largo del tanque a construir: ");
    scanf("%f", &largo);

    printf("\nIngrese la altura del tanque: ");
    scanf("%f", &altura);

    printf("\nEl tanque tendra una capacidad de: %.2f litros", volumenLitro(ancho,largo,altura));

     return 0;
}

float volumenLitro(float ancho, float largo, float altura)
{
    return (ancho * largo * altura) * Met_Lit;
}
