#include <stdio.h> // incluye la biblioteca estzndar de entrada y salida, y la biblioteca de funciones
#include <stdlib.h>

struct alumno { // define una estructura para los alumnos
    int matricula; // numero de matricula del alumno
    char nombre[50]; // nombre del alumno
    char direccion[50]; // direccion del alumno
    char carrera[50]; // carrera del alumno
    float promedio; // promedio del alumno
};