/*!
 * @file    funciones.h
 * @brief   Módulo para el manejo de pilas. Utilizando internamente estructuras autorreferenciadas para almacenar la información
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    29/09/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

typedef enum Status
{
    EXITO = 0,
    ERROR_FALLA_DE_MEMORIA,
    ERROR_PILA_VACIA
} Status;

typedef struct Dato
{
    char usuario[30];
    int edad;
} Dato;

typedef struct Nodo
{
    Dato dato;
    struct Nodo* siguiente;
} Nodo;

/*!
 * @brief Inserta un elemento en la pila.
 * @param[in] pila Puntero a puntero que apunta al primer elemento en la pila.
 * @param[in] dato Variable de entrada que recibe el dato a insertar en la pila.
 * @return	  Devuelve EXITO = 0, ERROR_FALLA_DE_MEMORIA o ERROR_PILA_VACIA.
 */
Status push(Nodo** pila, Dato dato);

/*!
 * @brief Quita un elemento de la pila.
 * @param[in] pila Puntero a puntero que apunta al primer elemento en la pila.
 * @param[out] dato Puntero de salida que devuelve el dato quitado de la pila.
 * @return	  Devuelve EXITO = 0, ERROR_FALLA_DE_MEMORIA o ERROR_PILA_VACIA.
 */
Status pop(Nodo** pila, Dato* dato);

/*!
 * @brief Devuelve el valor del próximo elemento a quitar de la pila (sin quitarlo).
 * @param[in] pila Puntero que apunta al primer elemento en la pila.
 * @param[out] dato Puntero de salida que devuelve el próximo elemento a quitar de la pila (sin quitarlo).
 * @return	  Devuelve EXITO = 0, ERROR_FALLA_DE_MEMORIA o ERROR_PILA_VACIA.
 */
Status espiar(Nodo* pila, Dato* dato);

/*!
 * @brief Imprime el contenido de la pila.
 * @param[in] pila Puntero que apunta al primer elemento en la pila.
 */
void imprimir(Nodo* pila);

/*!
 * @brief Destruye la pila.
 * @param[in] pila Puntero a puntero que apunta al primer elemento en la pila..
 */
void destruir(Nodo** pila);

#endif // FUNCIONES_H_
