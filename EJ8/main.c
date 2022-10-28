/*!
 * @file    main.c
 * @brief   Desarrollá un programa que genere muestras aleatorias en un intervalo dado por el usuario. El programa debe recibir como argumentos
 *          el inicio del intervalo, Xi, el fin del intervalo, Xf, y la cantidad de muestras a generar, n.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    11/07/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(int argc, char* argv[])
{
    int ret=0;
    if (validarArgumentos(argc)==0)
    {
        generarMuestras (argv[1], argv[2], argv[3]);
    }
    else
    {
        ret = 1;
    }
    

    return ret;
}
