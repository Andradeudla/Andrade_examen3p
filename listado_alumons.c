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
        case 1:                                     // em caso que el usuario elige la opcion 1 se realizara lo siguiente
            printf("Ingrese matricula: ");          // pide al usuario la matricula del estudiante
            scanf("%d", &estudiantes[i].matricula); // lee la matricula del estudiante
            fflush(stdin);                          // limpia el buffer de entrada

            printf("Ingrese nombre: ");  // pide al usuario el nombre del estudiante
            gets(estudiantes[i].nombre); // lee el nombre del estudiante

            printf("Ingrese direccion: ");  // pide al usuario la dirección del estudiante
            gets(estudiantes[i].direccion); // lee la direccion del estudiante

            printf("Ingrese carrera: ");  // pide al usuario la carrera del estudiante
            gets(estudiantes[i].carrera); // lee la carrera del estudiante

            printf("Ingrese promedio: ");          // pide al usuario el promedio del estudiante
            scanf("%f", &estudiantes[i].promedio); // lee el promedio del estudiante
            fflush(stdin);                         // limpia el buffer de entrada

            i++; // incrementa el contador de estudiantes

            break;
        case 2:                         // caso en el que el usuario elige la opcion 2
            for (int j = 0; j < i; j++) // bucle que recorre todos los estudiantes ingresados
            {
                printf("-------------Listado de Alumnos----------- \n");
                printf("\nEstudiante %d:\n", j + 1);                 // imprime el encabezado del estudiante
                printf("Matricula: %d\n", estudiantes[j].matricula); // imprime la matricula del estudiante
                printf("Nombre: ");                                  // imprime el nombre del estudiante
                puts(estudiantes[j].nombre);
                printf("Direccion: "); // imprime la direccion del estudiante
                puts(estudiantes[j].direccion);
                printf("Carrera: "); // imprime la carrera del estudiante
                puts(estudiantes[j].carrera);
                printf("Promedio: %.2f\n", estudiantes[j].promedio); // imprime el promedio del estudiante
            }
            break; // termina el caso 2∫

        default:
            break;
        }
    }
}