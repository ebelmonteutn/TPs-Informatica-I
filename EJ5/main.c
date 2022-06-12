/*!
 * @file    main.c
 * @brief   Implementar una función que reciba un arreglo y su longitud y retorne 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    13/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define ANGULO_LIMITE 0.3

int main(void)
{
    double vector_a[3]={2,3,4};
    double vector_b[3]={4,5,7};
    double producto=0, norma=0, angulo=0;
    int apuntado=0;

    producto=producto_escalar_vec3(vector_a, vector_b);// Ejemplo producto escalar entre {2,3,4} y {4,5,7}
    printf("El producto esclar es: %f\n", producto);

    norma=norma_vec3(vector_a); //Ejemplo norma del vector {2,3,4}
    printf("La norma del vector es: %f\n", norma);

    angulo=angulo_entre_vec3(vector_a, vector_b); // Ejemplo angulo entre {2,3,4} y {4,5,7}
    printf("El angulo entre los vectores es: %f\n", angulo);

    apuntado=esta_apuntando_al_enemigo(, , ANGULO_LIMITE);
    printf("El resultado de la funcion <esta_apuntando_al_enemigo> es: %d", apuntado);
    return 0;
}
