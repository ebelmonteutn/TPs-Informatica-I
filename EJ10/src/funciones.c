/*!
 * @file    funciones.c
 * @brief   Módulo capaz de agregar, eliminar (por patente), ordenar (por marca y modelo), e imprimir los automóviles
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    20/09/2022
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int automoviles_agregar(Automovil** automoviles, int* cantidad_automoviles, Automovil* automovil)
{
    int ret = ERROR;
    Automovil* aux = NULL;
    if (automoviles != NULL && cantidad_automoviles != NULL && automovil != NULL)
    {
        aux= (Automovil*) realloc(*automoviles, ((*cantidad_automoviles)+1) * sizeof(Automovil));
        if(aux != NULL)
        {
            aux[*cantidad_automoviles] = *automovil;
            *automoviles = aux;
            ret = EXITO;
            (*cantidad_automoviles)++;
        }
    }
    return ret;
}

int automoviles_eliminar(Automovil** automoviles, int* cantidad_automoviles, char* patente)
{
    int i = 0, j = 0, ret = ERROR, flag = FALSE;
    Automovil* aux=NULL;
    if(automoviles != NULL && cantidad_automoviles != NULL && patente != NULL && (*cantidad_automoviles) > 0)
    {
        while (i < *cantidad_automoviles && flag == FALSE)
        { 
            if(strcmp((*automoviles)[i].patente, patente) == 0)
            {
                flag = TRUE;
            }
                i++;
        }
        if (flag == TRUE)
        {
            for(j = i; j < *cantidad_automoviles; j++)
            {
                (*automoviles)[j-1] = (*automoviles)[j];
            }
            aux= (Automovil*) realloc(*automoviles, ((*cantidad_automoviles) - 1) * sizeof(Automovil));
            if (aux != NULL || ((*cantidad_automoviles)-1) == 0)
            {
                ret = EXITO;
                *automoviles = aux;
                (*cantidad_automoviles)--;
            }
        }
        else
        {
            ret=NO_ENCONTRADO;
        }
    }
    return ret;
}

void automovil_imprimir(Automovil* automovil)
{
    char* colores[] = {"Rojo", "Negro", "Gris", "Azul", "Blanco"};
    if (automovil != NULL)
    {
        printf("\n");
        printf("%s %s - %.1f\n", automovil->marca, automovil->modelo, automovil->cilindrada);
        printf("%d | %d km\n", automovil->anio, automovil->kilometraje);
        printf("\n");
        printf("$ %d\n", automovil->precio);
        printf("%s - %s\n", colores[automovil->color], automovil->patente);
        printf("\n");
    }
}

void automoviles_imprimir(const Automovil* automoviles, int cantidad_automoviles)
{
    char* colores[] = {"Rojo", "Negro", "Gris", "Azul", "Blanco"};
    int i;
    if (automoviles != NULL)
    {
        for (i = 0; i < cantidad_automoviles; i++)
        {
            printf("\n");
            printf("%s %s - %.1f\n", automoviles[i].marca, automoviles[i].modelo, automoviles[i].cilindrada);
            printf("%d | %d km\n", automoviles[i].anio, automoviles[i].kilometraje);
            printf("\n");
            printf("$ %d\n", automoviles[i].precio);
            printf("%s - %s\n", colores[automoviles[i].color], automoviles[i].patente);
            printf("\n");
        }
    }
}

void automoviles_ordenar(Automovil** automoviles, int cantidad_automoviles)
{
    int i = 0, j = 0, flag = TRUE, compare;
    Automovil aux;
    if (automoviles != NULL)
    {
        while (i < (cantidad_automoviles - 1) && flag != FALSE)
        {
            flag=FALSE;
            for (j = 0; j < (cantidad_automoviles - i - 1); j++)
            {
                compare = strcasecmp((*automoviles)[j].marca, (*automoviles)[j+1].marca);
                if (compare > 0)
                {
                    aux = (*automoviles)[j+1];
                    (*automoviles)[j+1] = (*automoviles)[j];
                    (*automoviles)[j] = aux;
                    flag = TRUE;
                }
                else if (compare == 0)
                {
                    compare = strcasecmp((*automoviles)[j].modelo, (*automoviles)[j+1].modelo);
                    if (compare > 0)
                    {
                    aux = (*automoviles)[j+1];
                    (*automoviles)[j+1] = (*automoviles)[j];
                    (*automoviles)[j] = aux;
                    flag = TRUE;
                    }
                }
            }
            i++;
        }
    }
}
