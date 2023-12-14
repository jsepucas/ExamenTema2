#include <stdio.h>
#include <string.h>

// Aquí se define la estructura del estudiante

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// En esta función mostramos los datos del estudiante

void mostrarEstudiante(struct Estudiante e) {
    printf("Nombre: %s\n", e.nombre);
    printf("Edad: %d\n", e.edad);
    printf("Promedio: %.2f\n", e.promedio);
}
