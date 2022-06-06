/*!
 * @file    funciones.h
 * @brief   Implementar una función que convierta un número en grados decimales, a su equivalente en grados, minutos y segundos, retornando
 *          dichos valores en variables pasadas por referencia.
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    06/06/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define MINUTOS 60
#define SEGUNDOS 60

/*!
 * @brief Convierte un número en grados decimales, a su equivalente en grados, minutos y segundos.
 *
 * @param[in] grados_decimales: Valor en grados decimales de entrada.
 * @param[out] grados: Puntero de salida utilizado para guardar el resultado.
 * @param[out] minutos: Puntero de salida utilizado para guardar el resultado.
 * @param[out] segundos: Puntero de salida utilizado para guardar el resultado.
 */
void a_grados_sexagesimales(float grados_decimales, int* grados, int* minutos, int* segundos);


#endif // FUNCIONES_H_
