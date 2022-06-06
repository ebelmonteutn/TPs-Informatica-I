/*!
 * @file    funciones.c
 * @brief   Implementar una función que convierta un número en grados decimales, a su equivalente en grados, minutos y segundos, retornando
 *          dichos valores en variables pasadas por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    06/06/2022
 */
#include "funciones.h"
#include <stdio.h>

void a_grados_sexagesimales(float grados_decimales, int* grados, int* minutos, int* segundos)
{
    if ((grados != NULL) && (minutos != NULL) && (segundos != NULL))
    {
        float aux=0;
        *grados=grados_decimales;
        aux=(grados_decimales-*grados)*MINUTOS;
        *minutos=aux;
        *segundos=(aux-*minutos)*SEGUNDOS;
    }
    else
    {
        printf("Error no se reciben punteros NULL.");
    }
}
