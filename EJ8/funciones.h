/*!
 * @file    main.c
 * @brief   Desarrollá un programa que genere muestras aleatorias en un intervalo dado por el usuario. El programa debe recibir como argumentos
 *          el inicio del intervalo, Xi, el fin del intervalo, Xf, y la cantidad de muestras a generar, n.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    11/07/2022
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief función que recibe los argumentos recibidos por el main y los valida.
 *
 * @param[in] buf Puntero de entrada que el vector con los argumentos.
 * @return	Devuelve 0 en caso que los argumentos sean validos y 1 en caso contrario.
 */
int validarArgumentos (int cant);

/*!
 * @brief función que genere muestras aleatorias en un intervalo dado por el usuario.
 *
 * @param[in] xi Puntero de entrada que el inicio.
 * @param[in] xf Puntero de entrada que el fin.
 * @param[in] xf Puntero de entrada que la cantidad de muestras a generar.
 */
void generarMuestras (char* xi, char* xf, char* n);


#endif // FUNCIONES_H_
