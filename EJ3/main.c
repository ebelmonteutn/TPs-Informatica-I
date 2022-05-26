/*!
 * @file    main.c
 * @brief   Implementar una función que reciba tres números que corresponden a los lados de un triángulo.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    23/05/2022
 * @details Instrucciones para compilar y linkear la aplicación: 1er comando: gcc -c main.c -o main.o -Wall
 *                                                               2do comando: gcc main.o -o EJ3
 *                                                               3er comando: ./EJ3
 */
#include <stdio.h>

int clasificar_triangulo_lados(float, float, float);

int main(void)
{
    float lado1,lado2,lado3;
    int num;
    
    printf("Ingrese un lado del triangulo\n");
    scanf("%f",&lado1);
    printf("Ingrese el otro lado del triangulo\n");
    scanf("%f",&lado2);
    printf("Ingrese el otro lado del triangulo\n");
    scanf("%f",&lado3);

    num= clasificar_triangulo_lados(lado1,lado2,lado3);

    printf("El resultado de la funcion es: %d \n",num);

    return 0;
}

int clasificar_triangulo_lados(float lado1, float lado2, float lado3)
{
    if(lado1==lado2 && lado2==lado3)
    {
        return 0;
    }
    else if(lado1==lado2 || lado2==lado3 || lado1==lado3)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}