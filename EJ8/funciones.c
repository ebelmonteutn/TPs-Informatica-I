/*!
 * @file    main.c
 * @brief   Desarrollá un programa que genere muestras aleatorias en un intervalo dado por el usuario. El programa debe recibir como argumentos
 *          el inicio del intervalo, Xi, el fin del intervalo, Xf, y la cantidad de muestras a generar, n.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    11/07/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validarArgumentos (int cant)
{
    int ret=0;
    if (cant != 4)
    {
            ret=1;
        
    }
    return ret;
}

void generarMuestras (char* xi, char* xf, char* n)
{
    int i, inicio, fin, cant, num=0;
    if (xi != NULL && xf != NULL && n != NULL)
    {
        srand (time(NULL));
        inicio = atoi(xi);
        fin = atoi(xf);
        cant = atoi(n);
        for (i = 0; i < cant; i++)
        {
            num = rand () % fin + inicio;
            while (num > fin || num < inicio)
            {
                num = rand () % fin + inicio;
            }
            printf("%d\n", num);
        }
        
    }
}