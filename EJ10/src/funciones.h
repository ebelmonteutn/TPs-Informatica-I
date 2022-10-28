/*!
 * @file    funciones.h
 * @brief   Módulo capaz de agregar, eliminar (por patente), ordenar (por marca y modelo), e imprimir los automóviles
 * @author  Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
 * @date    20/09/2022
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#define ERROR -1
#define NO_ENCONTRADO 1
#define EXITO 0
#define TRUE 1
#define FALSE 0
#define MAX_PATENTE 8
#define MAX_MARCA 25
#define MAX_MODELO 25

typedef enum Colores
{
    ROJO,
    NEGRO,
    GRIS,
    AZUL,
    BLANCO,
} Colores;

typedef struct Automovil
{
    char marca[MAX_MARCA];
    char modelo[MAX_MODELO];
    unsigned int anio;
    float cilindrada;
    Colores color;
    char patente[MAX_PATENTE];
    unsigned int precio;
    unsigned int kilometraje;
} Automovil;

/*!
 * @brief Agrega una automóvil al vector de automóviles, reservando la memoria necesaria.
 * @param[in] automoviles Puntero a puntero de entrada y salida que recibe un arreglo de automoviles.
 * @param[in] cantidad_automoviles Puntero que recibe la cantidad de automoviles que hay en el arreglo.
 * @param[in] automovil Puntero de entrada que recibe el automovil a agregar al arreglo.
 * @return	 EXITO(0) o ERROR(-1).
 */
int automoviles_agregar(Automovil** automoviles, int* cantidad_automoviles, Automovil* automovil);

/*!
 * @brief Elimina un automóvil del vector de automóviles (por patente), liberando la memoria asociada.
 * @param[in] automoviles Puntero a puntero de entrada y salida que recibe un arreglo de automoviles.
 * @param[in] cantidad_automoviles Puntero que recibe la cantidad de automoviles que hay en el arreglo.
 * @param[in] patente Puntero de entrada que recibe la patente del automovil a eliminar.
 * @return	EXITO(0) o ERROR(-1).
 */
int automoviles_eliminar(Automovil** automoviles, int* cantidad_automoviles, char* patente);

/*!
 * @brief Imprime los detalles de un automóvil en pantalla.
 * @param[in] automovil Puntero de entrada que recibe el automovil a imprimir.
 */
void automovil_imprimir(Automovil* automovil);

/*!
 * @brief Imprime el contenido del vector de automóviles.
 * @param[in] automoviles Puntero a puntero de entrada que recibe un arreglo de automoviles.
 * @param[in] cantidad_automoviles Puntero que recibe la cantidad de automoviles que hay en el arreglo.
 */
void automoviles_imprimir(const Automovil* automoviles, int cantidad_automoviles);

/*!
 * @brief Ordena los automóviles del vector por marca y modelo.
 * @param[in] automoviles Puntero a puntero de entrada y salida que recibe un arreglo de automoviles.
 * @param[in] cantidad_automoviles variable que recibe la cantidad de automoviles que hay en el arreglo.
 */
void automoviles_ordenar(Automovil** automoviles, int cantidad_automoviles);

#endif // FUNCIONES_H_
