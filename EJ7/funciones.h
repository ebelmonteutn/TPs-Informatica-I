/*!
 * @file    funciones.h
 * @brief   Implementar una función que reciba una matriz de enteros de NxM elementos, y compute la transpuesta de dicha matriz.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    05/07/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief función que recibe una matriz de enteros de NxM elementos, y computa la transpuesta de dicha matriz.
 *
 * @param[in] matriz Puntero de entrada que recibe la matriz.
 * @param[in] filas Variable de entrada que recibe la cantidad de filas que tiene la matriz.
 * @param[in] columnas Variable de entrada que recibe la cantidad de columnas que tiene la matriz.
 * @param[out] matriz_transpuesta Puntero de salida donde guarda la matriz transpuesta.
 */
void transpuesta(const double* matriz, int filas, int columnas, double* matriz_transpuesta);

/*!
 * @brief función que recibe una matriz de enteros y la imprime en pantalla.
 *
 * @param[in] matriz Puntero de entrada que recibe la matriz.
 * @param[in] filas Variable de entrada que recibe la cantidad de filas que tiene la matriz.
 * @param[in] columnas Variable de entrada que recibe la cantidad de columnas que tiene la matriz.
 */
void imprimir_matriz(const double* matriz, int filas, int columnas);

#endif // FUNCIONES_H_
