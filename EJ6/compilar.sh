#!/bin/bash

# Descripcion: Script para compilar y linkear el ejercicio
# Autor: Enzo Belmonte <ebelmonte@frba.utn.edu.ar>
#
# Para ejecutar: 
#   Opcion 1) bash compilar.sh
#   Opcion 2) chmod +x compilar.sh
#             ./compilar.sh

gcc -c funciones.c -o funciones.o -Wall 
gcc -c main.c -o main.o -Wall
gcc funciones.o main.o -o EJ 
