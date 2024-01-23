#include <stdio.h> // incluye la biblioteca estzndar de entrada y salida, y la biblioteca de funciones
#include <stdlib.h>

struct alumno
{                       // define una estructura para los alumnos
    int matricula;      // numero de matricula del alumno
    char nombre[50];    // nombre del alumno
    char direccion[50]; // direccion del alumno
    char carrera[50];   // carrera del alumno
    float promedio;     // promedio del alumno
};

int main()
{
    struct alumno estudiantes[100]; // declara un array de estructuras de alumnos
    int opcion, i = 0;              // declara las variables opcion i

    while (1)
    {
        printf("---------Menu de Opciones--------- \n"); // ingresamos un titulo para darle estetica al menu
        printf("1) Ingreso de nuevos estudiantes\n");    // imprime la opción 1 del menu
        printf("2) Listado de estudiantes\n");           // imprime la opción 2 del menu
        printf("3) Salir\n");                            // imprime la opción 3 del menu
        printf("Seleccione una opcion: ");               // pide al usuario que elija una opcion
        scanf("%d", &opcion);                            // lee la opcion del usuario
        fflush(stdin);                                   // limpia el buffer de entrada

        switch (opcion)
        {
        case 1: // em caso que el usuario elige la opcion 1 se realizara lo siguiente
        
            
            break;
        
        default:
            break;
        }
    }
}