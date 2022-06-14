/*!
 * @file    main.c
 * @brief   Implementar una función que computa el producto escalar de dos vectores de dimensión 3, 
 *          función que computa la norma de un vector de dimensión 3, 
 *          función que computa el ángulo de separación (en radianes) entre dos vectores y 
 *          una función que comprueba si un enemigo está siendo apuntado por el jugador.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    13/06/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define ANGULO_LIMITE 0.2 //Angulo limite=0,2 radianes

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

    apuntado=esta_apuntando_al_enemigo(vector_a, vector_b, ANGULO_LIMITE); // Ejemplo con {2,3,4} y {4,5,7}
    printf("El resultado de la funcion <esta_apuntando_al_enemigo> es: %d\n", apuntado);

    vector_a[0]=3;
    vector_a[1]=8;
    vector_a[2]=1;
    vector_b[0]=9;
    vector_b[1]=34;
    vector_b[2]=21;
    apuntado=esta_apuntando_al_enemigo(vector_a, vector_b, ANGULO_LIMITE); // Ejemplo con {3,8,1} y {9,34,21}
    printf("El resultado de la funcion <esta_apuntando_al_enemigo> es: %d\n", apuntado);

    vector_a[0]=1;
    vector_a[1]=0;
    vector_a[2]=0;
    vector_b[0]=0;
    vector_b[1]=1;
    vector_b[2]=0;
    apuntado=esta_apuntando_al_enemigo(vector_a, vector_b, ANGULO_LIMITE); // Ejemplo con {1,0,0} y {0,1,0}
    printf("El resultado de la funcion <esta_apuntando_al_enemigo> es: %d\n", apuntado);

    vector_a[0]=1;
    vector_a[1]=1;
    vector_a[2]=3;
    vector_b[0]=1;
    vector_b[1]=1;
    vector_b[2]=2;
    apuntado=esta_apuntando_al_enemigo(vector_a, vector_b, ANGULO_LIMITE); // Ejemplo con {1,1,3} y {1,1,2}
    printf("El resultado de la funcion <esta_apuntando_al_enemigo> es: %d\n", apuntado);

    return 0;
}
