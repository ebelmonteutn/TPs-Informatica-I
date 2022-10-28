/*!
 * @file    funciones.c
 * @brief   Módulo para el manejo de pilas. Utilizando internamente estructuras autorreferenciadas para almacenar la información
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    29/09/2022
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

Status push(Nodo** pila, Dato dato)
{
    Status ret = ERROR_PILA_VACIA;
    Nodo* temp = NULL;
    Nodo* aux = NULL;
    if (pila != NULL)
    {
        aux = (Nodo*)malloc(sizeof(Nodo));
        if(aux != NULL)
        {
            aux->siguiente = NULL;
            aux->dato=dato;
            if ((*pila) == NULL)
            {
                (*pila) = aux;
            }
            else
            {
                temp = (*pila);
                while (temp->siguiente != NULL)
                {
                    temp = temp->siguiente;
                }
                temp->siguiente = aux;
            }
            ret = EXITO;
        }
        else
        {
            ret = ERROR_FALLA_DE_MEMORIA;
        }
    }
    return ret;
}

Status pop(Nodo** pila, Dato* dato)
{
    Status ret = ERROR_PILA_VACIA;
    Nodo* temp = NULL;
    Nodo* aux = NULL;
    if (pila != NULL && dato != NULL && (*pila) != NULL)
    {
        if ((*pila)->siguiente != NULL)
        {
            temp = (*pila);
            while (temp->siguiente != NULL)
            {
                if(temp->siguiente != NULL)
                {
                    aux = temp;
                }
                temp = temp->siguiente;
            }
            *dato = temp->dato;
            free(temp);
            aux->siguiente = NULL;
        }
        else
        {
            (*dato) = (*pila)->dato;
            free(*pila);
            (*pila) = NULL;
        }
        ret=EXITO;
    }
    return ret;
}

Status espiar(Nodo* pila, Dato* dato)
{
    Status ret = ERROR_PILA_VACIA;
    Nodo* temp = NULL;
    if (pila != NULL && dato != NULL)
    {
        temp = pila;
        while (temp->siguiente != NULL)
        {
            temp = temp->siguiente;
        }
        *dato = temp->dato;
        ret = EXITO;
    }
    return ret;
}

void imprimir(Nodo* pila)
{
    Nodo* temp = NULL;
    if (pila != NULL)
    {
        temp=pila;
        while (temp->siguiente != NULL)
        {
            printf("Usuario: %s\n", temp->dato.usuario);
            printf("Edad: %d\n", temp->dato.edad);
            temp = temp->siguiente;
        }
        printf("Usuario: %s\n", temp->dato.usuario);
        printf("Edad: %d\n", temp->dato.edad);
    }
}

void destruir(Nodo** pila)
{
    Nodo* temp = NULL;
    Nodo* aux = NULL;
    if (pila != NULL && (*pila) != NULL)
    {
        while ((*pila) != NULL)
        {
            if ((*pila)->siguiente != NULL)
            {
                temp = (*pila);
                while (temp->siguiente != NULL)
                {
                    if(temp->siguiente != NULL)
                    {
                        aux = temp;
                    }
                    temp = temp->siguiente;
                }
                free(temp);
                aux->siguiente = NULL;
            }
            else
            {
                free(*pila);
                (*pila) = NULL;
            }
        }
    }
}
