/*!
 * @file    funciones.c
 * @brief   Implementar la función strcpy.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    26/06/2022
 */
#include "funciones.h"
#include <stdio.h>

void mi_strcpy(char* dest, const char* orig)
{
    int i=0;
    if (dest != NULL && orig != NULL)
    {
        while (*(orig + i) != '\0')
        {
            *(dest + i) = *(orig + i);
            i++;
        }
        *(dest + i) = '\0';
    }
}

