/*!
 * @file    funciones.c
 * @brief   Implementar una función que compute el promedio de dos números enteros y almacene el resultado de la operación en una variable
 *          pasada por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    03/06/2022
 */
#include "funciones.h"
#include <stdio.h>

void promedio(int x, int y, float* resultado)
{
    if (resultado != NULL)
    {
        *resultado=(float)(x+y)/2;
    }
    else
    {
        printf("Error no se reciben punteros NULL.");
    }
}
