/*!
 * @file    main.c
 * @brief   Desarrolle una función que reciba un string, un caracter y una longitud. La función retorna una copia del string original (utilizando
            memoria dinámica), centrado en la longitud especificada y rellenando los espacios restantes con el caracter pedido. La función deberá
            retornar ERROR (-1) si ocurrió algún error, y EXITO (0) en caso contrario. 
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    18/09/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
    char* string_out=NULL;
    int ret;
    
    ret=centrar(" cadena ", '*', 12, &string_out);
    if (ret == EXITO)
    {
        printf("El string es: %s\n", string_out);
        free(string_out);
    }
    else
    {
        printf("Error\n");
    }
    ret=centrar(" prueba ", '-', 14, &string_out);
    if (ret == EXITO)
    {
        printf("El string es: %s\n", string_out);
        free(string_out);
    }
    else
    {
        printf("Error\n");
    }
    ret=centrar("Arbol", '#', 11, &string_out);
    if (ret == EXITO)
    {
        printf("El string es: %s\n", string_out);
        free(string_out);
    }
    else
    {
        printf("Error\n");
    }
    
    return 0;
}
