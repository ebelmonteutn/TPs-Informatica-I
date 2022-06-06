/*!
 * @file    main.c
 * @brief   Implementar una función que convierta un número en grados decimales, a su equivalente en grados, minutos y segundos, retornando
 *          dichos valores en variables pasadas por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    06/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int grados=0, minutos=0, segundos=0;

    a_grados_sexagesimales(275.4, &grados, &minutos, &segundos);// ejemplo con 275.4°
    printf("%d° %d' %d\"\n",grados, minutos, segundos);

    a_grados_sexagesimales(125.34, &grados, &minutos, &segundos);// ejemplo con 125.34°
    printf("%d° %d' %d\"\n",grados, minutos, segundos);

    a_grados_sexagesimales(90, &grados, &minutos, &segundos);// ejemplo con 90°
    printf("%d° %d' %d\"\n",grados, minutos, segundos);

    a_grados_sexagesimales(9.1218, &grados, &minutos, &segundos);// ejemplo con 9.1218°
    printf("%d° %d' %d\"\n",grados, minutos, segundos);

    return 0;
}
