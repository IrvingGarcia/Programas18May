/* Alumno: Irving Efren Garcia Ramos */
/* E-mail: irvin.16@outlook.es       */
/* Fecha de Creación: 14/05/2018     */
/* Fecha de actualización:           */
/* Descripción: Programa que calcule
   el imc de una persona             */

#include <stdio.h>

float IMC(float peso ,float estatura);

int main(void)
{
     float peso;
     float estatura;

     printf("Ingrese su peso en kg: ");
     scanf("%f", &peso);

     printf("\nIngrese su estatura en metros: ");
     scanf("%f", &estatura);

     printf("Su indice de masa corporal es de: %.2f", IMC(peso, estatura));

     return 0;
}

float IMC(float peso, float estatura)
{
     return peso / (estatura * estatura);
}
