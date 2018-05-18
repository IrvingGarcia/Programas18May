/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que calcule
   el area de un terreno  rectangular */

#include <stdio.h>

float areaterreno(float base, float altura);

int main(void)
{
     float base;
     float altura;

//Pedimos ingresar los  datos al usuario

     printf("\nIngrese el ancho de su terreno: ");
     scanf("%f", &altura);

     printf("\nIngrese el largo de su  terreno: ");
     scanf("%f", &base);

     printf("\nEl area del terreno es de: %.2f metros cuadrados", areaterreno(base,altura));

     return 0;
}

float areaterreno(float base,float altura)
{
    return base * altura;
}
