/*!
 * @file    funciones.c
 * @brief   Implementar una función que reciba una matriz de enteros de NxM elementos, y compute la transpuesta de dicha matriz.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    05/07/2022
 */
#include "funciones.h"
#include <stdio.h>

void transpuesta(const double* matriz, int filas, int columnas, double* matriz_transpuesta)
{
    int i, j;
    if (matriz != NULL && matriz_transpuesta != NULL)
    {
        for (i = 0; i < filas; i++)
        {
            for (j = 0; j < columnas; j++)
            {
                *(matriz_transpuesta + j*filas + i) = *(matriz + i*columnas + j);
            }
        }
    }    
}

void imprimir_matriz(const double* matriz, int filas, int columnas)
{
    int i, j;
    if (matriz != NULL)
    {
        for (i = 0; i < filas; i++)
        {
            for (j = 0; j < columnas; j++)
            {
                printf("%.3f ", *(matriz + i*columnas +j));
            }
            printf("\n");
        }
        
    }
    
}
