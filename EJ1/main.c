/*!
 * @file    main.c
 * @brief   Programa que calcula la mínima cantidad de billetes con los que se puede obtener un monto
 * @author  Enzo Belmonte ebelmonte@frba.utn.edu.ar
 * @date    09/05/2022
 * @details Instrucciones para compilar y linkear la aplicación:
 *                                                              1er comando: gcc -c main.c -o main.o -Wall
 *                                                              2do comando: gcc main.o -o EJ1
 *                                                              3er comando: ./EJ1
 */
#include <stdio.h>

#define ARS1000 1000;
#define ARS500 500;
#define ARS200 200;
#define ARS100 100;
#define ARS50 50;
#define ARS20 20;
#define ARS10 10;

int main(void)
{
    int monto;
    int cant1000, cant500, cant200, cant100, cant50, cant20, cant10;

    printf("Ingrese el monto en pesos argentinos\n");
    scanf ("%d", &monto);
    if(monto > 0){
        if(monto >= 1000){
            cant1000=monto/ARS1000;
            monto=monto-cant1000*ARS1000;
            printf("%d billetes de 1000 ARS\n", cant1000);
        }  
        if(monto >= 500){
            cant500=monto/ARS500;
            monto=monto-cant500*ARS500;
            printf("%d billetes de 500 ARS\n", cant500);
        }  
        if(monto >= 200){
            cant200=monto/ARS200;
            monto=monto-cant200*ARS200;
            printf("%d billetes de 200 ARS\n", cant200);
        }  
        if(monto >= 100){
            cant100=monto/ARS100;
            monto=monto-cant100*ARS100;
            printf("%d billetes de 100 ARS\n", cant100);
        }  
        if(monto >= 50){
            cant50=monto/ARS50;
            monto=monto-cant50*ARS50;
            printf("%d billetes de 50 ARS\n", cant50);
        }  
        if(monto >= 20){
            cant20=monto/ARS20;
            monto=monto-cant20*ARS20;
            printf("%d billetes de 20 ARS\n", cant20);
        }  
        if(monto >= 10){
            cant10=monto/ARS10;
            monto=monto-cant10*ARS10;
            printf("%d billetes de 10 ARS\n", cant10);
        }  
        if(monto < 10 &&  monto !=0){
            printf("No existen billetes menores a 10 ARS por lo tanto quedan %d ARS\n", monto);
        }  
    }
    else{
        printf("Debe ingresar un monto valido\n");
    }
    return 0;
}
