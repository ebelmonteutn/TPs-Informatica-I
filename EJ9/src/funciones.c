/*!
 * @file    funciones.c
 * @brief   Desarrolle una función que reciba un string, un caracter y una longitud. La función retorna una copia del string original (utilizando
            memoria dinámica), centrado en la longitud especificada y rellenando los espacios restantes con el caracter pedido. La función deberá
            retornar ERROR (-1) si ocurrió algún error, y EXITO (0) en caso contrario. 
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    18/09/2022
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int centrar(const char* string_in, char caracter, int largo, char** string_out)
{
    int ret=ERROR, largo_str_in, cant_char, i, j;
    if (string_in != NULL && string_out != NULL)
    {
        largo_str_in=strlen(string_in);
        if (largo > largo_str_in && ((largo-largo_str_in) % 2) == 0)
        {
            *string_out=(char*) malloc((largo + 1)*sizeof(char));
            if (*string_out)
            {
                cant_char=(largo-largo_str_in)/2;
                for (i = 0; i < cant_char; i++)
                {
                    (*string_out)[i]=caracter;
                }
                for (j = 0; j < largo_str_in; j++)
                {
                    (*string_out)[i+j]=string_in[j];
                }
                for(i = i+j; i < largo; i++)
                {
                    (*string_out)[i]=caracter;
                }
                (*string_out)[i]='\0';
                ret=EXITO;
            }
        }
    }
    return ret;
}