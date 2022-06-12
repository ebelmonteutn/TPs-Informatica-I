/*!
 * @file    funciones.h
 * @brief   Implementar una función que reciba un arreglo y su longitud y retorne 1 si el mismo se encuentra ordenado (de menor a mayor) y 0 en
 *          caso contrario
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    13/06/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/*!
 * @brief Función que computa el producto escalar de dos vectores de dimensión 3 
 * @param[in] vector_a: Puntero que recibe el vector a.
 * @param[in] vector_b: Puntero que recibe el vector b.
 * @return	Devuelve el producto escalar de dos vectores de dimensión 3.
 */
double producto_escalar_vec3(const double* vector_a, const double* vector_b);
/*!
 * @brief Función que computa la norma de un vector de dimensión 3. 
 * @param[in] vector: Puntero que recibe el vector.
 * @return	Devuelve la norma del vector.
 */
double norma_vec3(const double* vector);
/*!
 * @brief Función que computa el ángulo de separación (en radianes) entre dos vectores 
 * @param[in] vector_a: Puntero que recibe el vector a.
 * @param[in] vector_b: Puntero que recibe el vector b.
 * @return	Devuelve el angulo entre los vectores.
 */
double angulo_entre_vec3(const double* vector_a, const double* vector_b);
/*!
 * @brief Función que comprueba si un enemigo está siendo apuntado por el jugador.
 * @param[in] vector_mira: Puntero que recibe el vector mira.
 * @param[in] vector_enemigo: Puntero que recibe el vector enemigo.
 * @param[in] angulo_limite: Variable de entrada que guarda el angulo_limite.
 * @return	Devuelve 1 si un enemigo está siendo apuntado por el jugador y 0 en
 *          caso contrario
 */
int esta_apuntando_al_enemigo(const double* vector_mira, const double* vector_enemigo, double angulo_limite);

#endif // FUNCIONES_H_
