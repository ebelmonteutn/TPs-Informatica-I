/*!
 * @file    funciones.c
 * @brief   Implementar una función que reciba un arreglo y su longitud y retorne 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    13/06/2022
 */
#include "funciones.h"
#include <math.h>
#include <stdio.h>

double producto_escalar_vec3(const double* vector_a, const double* vector_b)
{
    if (vector_a != NULL && vector_b != NULL)
    {
        double resultado=0;
        int i;
        for (i = 0; i < DIMENSION; i++)
        {
            resultado=resultado+ ((*(vector_a+i)) * (*(vector_b+i)));
        }       
        return resultado;
    }
    else
    {
        return -1;
    }
}

double norma_vec3(const double* vector)
{
    if (vector != NULL)
    {
        double resultado=0;
        int i;
        for (i = 0; i < DIMENSION; i++)
        {
            resultado=resultado+ ((*(vector+i)) * (*(vector+i)));
        }
        resultado=sqrt(resultado);       
        return resultado;
    }
    else
    {
        return -1;
    }
}

double angulo_entre_vec3(const double* vector_a, const double* vector_b)
{
    if (vector_a != NULL && vector_b != NULL)
    {
        double resultado=0;
        resultado= producto_escalar_vec3(vector_a, vector_b) /  (norma_vec3(vector_a) * norma_vec3(vector_b));
        resultado=acos(resultado);
        return resultado;
    }
    else
    {
        return -1;
    }
}

int esta_apuntando_al_enemigo(const double* vector_mira, const double* vector_enemigo, double angulo_limite)
{
    if (vector_mira != NULL && vector_enemigo != NULL)
    {
        double angulo=0;
        angulo=angulo_entre_vec3(vector_mira, vector_enemigo);
        if (angulo < angulo_limite)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return -1;
    }
}
