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
    double resultado=0;
    int i;
    for (i = 0; i < 3; i++)
    {
        resultado=resultado+ ((*(vector_a+i)) * (*(vector_b+i)));
    }       
    return resultado;
}

double norma_vec3(const double* vector)
{
    double resultado=0;
    int i;
    for (i = 0; i < 3; i++)
    {
        resultado=resultado+ ((*(vector+i)) * (*(vector+i)));
    }
    resultado=sqrt(resultado);       
    return resultado;
}

double angulo_entre_vec3(const double* vector_a, const double* vector_b)
{
    double resultado=0;
    resultado= producto_escalar_vec3(vector_a, vector_b) /  (norma_vec3(vector_a) * norma_vec3(vector_b));
    resultado=acos(resultado);
    return resultado;
}

int esta_apuntando_al_enemigo(const double* vector_mira, const double* vector_enemigo, double angulo_limite)
{

}
