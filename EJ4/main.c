/*!
 * @file    main.c
 * @brief   Implementar una función que compute el promedio de dos números enteros y almacene el resultado de la operación en una variable
 *          pasada por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    03/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    float resultado=0;

    promedio(10, 4, &resultado); // Ejemplo promedio de 10 y 4
    printf("El promedio es: %f\n",resultado);
    promedio(7, 9, &resultado); // Ejemplo promedio de 7 y 9
    printf("El promedio es: %f\n",resultado);
    return 0;
}
