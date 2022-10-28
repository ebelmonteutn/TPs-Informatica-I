/*!
 * @file    main.c
 * @brief   Implementar una función que reciba una matriz de enteros de NxM elementos, y compute la transpuesta de dicha matriz.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    02/07/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define N 2
#define M 3

int main(void)
{
    double  matriz [N] [M]={{2,6,8}, {1,2,3}};
    double  matriz_t [M] [N];

    transpuesta(&matriz[0][0], N, M, &matriz_t[0][0]);

    printf("Matriz original: \n");
    imprimir_matriz(&matriz[0][0], N, M);
    printf("Matriz transpuesta: \n");
    imprimir_matriz(&matriz_t[0][0], M, N);

    return 0;
}
