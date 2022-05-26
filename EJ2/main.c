/*!
 * @file    main.c
 * @brief   Programa que el usuario ingresa qué tan altas deben ser las pirámides solicitando  un número entero positivo entre 1 y 8 inclusive.
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    16/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ2
 *                                                               3er comando: ./EJ2
 */
#include <stdio.h>

int main(void)
{
    int alto,i,j;
    printf("Ingrese el alto de las piramides, debe ser un numero del 1 al 8 inclusive. \n");
    scanf("%d", &alto);
    while (alto<1 || alto>8){
        printf("Debe ingresar un numero entre el 1 y el 8 inclusive\n");
        printf("Ingrese el alto de las piramides\n");
        scanf("%d", &alto);
    }
    for(i=1;i<=alto;i++){
        for(j=0;j<i;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}