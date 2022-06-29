/*!
 * @file    main.c
 * @brief   Implementar la función strcpy.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    26/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define LARGO 15

int main(void)
{
    char string [LARGO];
    
    mi_strcpy(string, "hola");
    printf("El string copiado es: '%s'\n", string); //Ejemplo con 'hola'

    mi_strcpy(string, "como estas?");
    printf("El string copiado es: '%s'\n", string); //Ejemplo con 'como estas?'

    mi_strcpy(string, "bien");
    printf("El string copiado es: '%s'\n", string); //Ejemplo con 'bien'

    mi_strcpy(string, "chau");
    printf("El string copiado es: '%s'\n", string); //Ejemplo con 'chau'
    
    return 0;
}
