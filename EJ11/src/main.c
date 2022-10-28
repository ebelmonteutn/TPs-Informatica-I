/*!
 * @file    main.c
 * @brief   Módulo para el manejo de pilas. Utilizando internamente estructuras autorreferenciadas para almacenar la información
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    29/09/2022
 * @details Para compilar, linkear y ejecutar: Ver Makefile
 */
#include <stdio.h>
#include "funciones.h"
#include <string.h>

int main(void)
{
    Dato dato;
    Nodo* pila = NULL;
    Status ret;

    dato.edad=19;
    strcpy(dato.usuario,"Enzo");
    ret = push(&pila, dato);
    if(ret == EXITO)
    {
        printf("Se inserto correctamente el dato en la pila\n");
    }
    else
    {
        printf("No se pudo insertar el dato en la pila, error de memoria\n\n");
    }
    dato.edad=24;
    strcpy(dato.usuario,"Luis");
    ret = push(&pila, dato);
    if(ret == EXITO)
    {
        printf("Se inserto correctamente el dato en la pila\n");
    }
    else
    {
        printf("No se pudo insertar el dato en la pila, error de memoria\n\n");
    }
    dato.edad=61;
    strcpy(dato.usuario,"Juan");
    ret = push(&pila, dato);
    if(ret == EXITO)
    {
        printf("Se inserto correctamente el dato en la pila\n");
    }
    else
    {
        printf("No se pudo insertar el dato en la pila, error de memoria\n\n");
    }
    dato.edad=13;
    strcpy(dato.usuario,"Lara");
    ret = push(&pila, dato);
    if(ret == EXITO)
    {
        printf("Se inserto correctamente el dato en la pila\n");
    }
    else
    {
        printf("No se pudo insertar el dato en la pila, error de memoria\n\n");
    }
    dato.edad=2;
    strcpy(dato.usuario,"Ignacio");
    ret = push(&pila, dato);
    if(ret == EXITO)
    {
        printf("Se inserto correctamente el dato en la pila\n");
    }
    else
    {
        printf("No se pudo insertar el dato en la pila, error de memoria\n\n");
    }
    imprimir(pila);
    ret = pop(&pila, &dato);
    if(ret == EXITO)
    {
        printf("Se saco correctamente el dato de la pila\n");
    }
    else if(ret == ERROR_PILA_VACIA)
    {
        printf("Pila vacia\n");
    }
    else
    {
        printf("Error de memoria\n");
    }
    ret = espiar(pila, &dato);
    if(ret == EXITO)
    {
        printf("El dato espiado es: Nombre: %s Edad: %d\n", dato.usuario, dato.edad);
    }
    else
    {
        printf("Pila vacia\n");
    }
    ret = pop(&pila, &dato);
    if(ret == EXITO)
    {
        printf("Se saco correctamente el dato de la pila\n");
    }
    else if(ret == ERROR_PILA_VACIA)
    {
        printf("Pila vacia\n");
    }
    else
    {
        printf("Error de memoria\n");
    }
    imprimir(pila);
    destruir(&pila);
    return 0;
}
