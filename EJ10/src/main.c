/*!
 * @file    main.c
 * @brief   Módulo capaz de agregar, eliminar (por patente), ordenar (por marca y modelo), e imprimir los automóviles
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    20/09/2022
 * @details Para compilar, linkear y ejecutar: Ver Makefile
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    Automovil* automoviles = NULL;
    Automovil automovil; 
    int ret, cantidad_automoviles = 0;
    char patente[MAX_PATENTE];
    
    //agrego
    strcpy(automovil.marca, "Ford");
    strcpy(automovil.modelo, "Ranger");
    automovil.anio = 2019;
    automovil.cilindrada = 3.2;
    automovil.color = GRIS;
    strcpy(automovil.patente, "AD903UY");
    automovil.precio = 5850123;
    automovil.kilometraje = 60584;
    ret = automoviles_agregar(&automoviles, &cantidad_automoviles, &automovil);
    if(ret != EXITO)
    {
        printf("Error al agregar el automovil\n");
    }
    else
    {
        printf("Automovil:");
        automovil_imprimir(&automovil); 
        printf("agregado correctamente\n\n");
    }

    strcpy(automovil.marca, "Ford");
    strcpy(automovil.modelo, "Focus");
    automovil.anio = 2016;
    automovil.cilindrada = 1.6;
    automovil.color = BLANCO;
    strcpy(automovil.patente, "AA470DW");
    automovil.precio = 680123;
    automovil.kilometraje = 35584;
    ret = automoviles_agregar(&automoviles, &cantidad_automoviles, &automovil);
    if(ret != EXITO)
    {
        printf("Error al agregar el automovil\n");
    }
    else
    {
        printf("Automovil:");
        automovil_imprimir(&automovil); 
        printf("agregado correctamente\n\n");
    }

    strcpy(automovil.marca, "Toyota");
    strcpy(automovil.modelo, "SW4");
    automovil.anio = 2015;
    automovil.cilindrada = 3.0;
    automovil.color = NEGRO;
    strcpy(automovil.patente, "NCD586");
    automovil.precio = 2300123;
    automovil.kilometraje = 25000;
    ret = automoviles_agregar(&automoviles, &cantidad_automoviles, &automovil);
    if(ret != EXITO)
    {
        printf("Error al agregar el automovil\n");
    }
    else
    {
        printf("Automovil:");
        automovil_imprimir(&automovil); 
        printf("agregado correctamente\n\n");
    }
    
    strcpy(automovil.marca, "Chevrolet");
    strcpy(automovil.modelo, "Captiva");
    automovil.anio = 2011;
    automovil.cilindrada = 2.0;
    automovil.color = NEGRO;
    strcpy(automovil.patente, "JTW844");
    automovil.precio = 2250123;
    automovil.kilometraje = 70584;
    ret = automoviles_agregar(&automoviles, &cantidad_automoviles, &automovil);
    if(ret != EXITO)
    {
        printf("Error al agregar el automovil\n");
    }
    else
    {
        printf("Automovil:");
        automovil_imprimir(&automovil); 
        printf("agregado correctamente\n\n");
    }

    strcpy(automovil.marca, "Jeep");
    strcpy(automovil.modelo, "Compass");
    automovil.anio = 2022;
    automovil.cilindrada = 1.3;
    automovil.color = BLANCO;
    strcpy(automovil.patente, "AF082TM");
    automovil.precio = 7800123;
    automovil.kilometraje = 12000;
    ret = automoviles_agregar(&automoviles, &cantidad_automoviles, &automovil);
    if(ret != EXITO)
    {
        printf("Error al agregar el automovil\n");
    }
    else
    {
        printf("Automovil:");
        automovil_imprimir(&automovil); 
        printf("agregado correctamente\n\n");
    }

    automoviles_imprimir(automoviles, cantidad_automoviles);

    //ordeno
    printf("Ordeno");
    automoviles_ordenar(&automoviles, cantidad_automoviles);
    automoviles_imprimir(automoviles, cantidad_automoviles);

    //elimino
    strcpy(patente, "NCD586");
    ret = automoviles_eliminar(&automoviles, &cantidad_automoviles, patente);
    if(ret == EXITO)
    {
        printf("Automovil: %s eliminado correctamente\n", patente);
    }
    else if(ret == NO_ENCONTRADO)
    {
        printf("Automovil no encontrado\n");
    }
    else
    {
        printf("Error al eliminar el automovil\n");
    }
    automoviles_imprimir(automoviles, cantidad_automoviles);

    strcpy(patente, "AD903UY");
    ret = automoviles_eliminar(&automoviles, &cantidad_automoviles, patente);
    if(ret == EXITO)
    {
        printf("Automovil: %s eliminado correctamente\n", patente);
    }
    else if(ret == NO_ENCONTRADO)
    {
        printf("Automovil no encontrado\n");
    }
    else
    {
        printf("Error al eliminar el automovil\n");
    }
    automoviles_imprimir(automoviles, cantidad_automoviles);

    strcpy(patente, "AA470DW");
    ret = automoviles_eliminar(&automoviles, &cantidad_automoviles, patente);
    if(ret == EXITO)
    {
        printf("Automovil: %s eliminado correctamente\n", patente);
    }
    else if(ret == NO_ENCONTRADO)
    {
        printf("Automovil no encontrado\n");
    }
    else
    {
        printf("Error al eliminar el automovil\n");
    }
    automoviles_imprimir(automoviles, cantidad_automoviles);

    strcpy(patente, "AF082TM");
    ret = automoviles_eliminar(&automoviles, &cantidad_automoviles, patente);
    if(ret == EXITO)
    {
        printf("Automovil: %s eliminado correctamente\n", patente);
    }
    else if(ret == NO_ENCONTRADO)
    {
        printf("Automovil no encontrado\n");
    }
    else
    {
        printf("Error al eliminar el automovil\n");
    }
    automoviles_imprimir(automoviles, cantidad_automoviles);

    strcpy(patente, "JTW844");
    ret = automoviles_eliminar(&automoviles, &cantidad_automoviles, patente);
    if(ret == EXITO)
    {
        printf("Automovil: %s eliminado correctamente\n", patente);
    }
    else if(ret == NO_ENCONTRADO)
    {
        printf("Automovil no encontrado\n");
    }
    else
    {
        printf("Error al eliminar el automovil\n");
    }
    automoviles_imprimir(automoviles, cantidad_automoviles);

    free(automoviles);
    return 0;
}
