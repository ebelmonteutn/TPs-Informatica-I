/*!
 * @file    funciones.h
 * @brief   Desarrolle una función que reciba un string, un caracter y una longitud. La función retorna una copia del string original (utilizando
            memoria dinámica), centrado en la longitud especificada y rellenando los espacios restantes con el caracter pedido. La función deberá
            retornar ERROR (-1) si ocurrió algún error, y EXITO (0) en caso contrario. 
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    18/09/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#define ERROR -1
#define EXITO 0
/*!
 * @brief Función que retorna una copia del string original, centrado en la longitud especificada y rellenando los espacios restantes con el caracter pedido.
 * @param[in] string_in: Puntero que recibe un string.
 * @param[in] caracter: Variable que recibe el caracter con el que rellenar los espacios restantes.
 * @param[in] largo: Variable que recibe la longitud en la que se desea centar el string.
 * @param[out] string_out: Puntero que retorna el string.
 * @return	ERROR (-1) si ocurrió algún error, y EXITO (0) en caso contrario.
 */
int centrar(const char* string_in, char caracter, int largo, char** string_out);

#endif // FUNCIONES_H_
