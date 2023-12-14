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

int main() {

}
    // Aquí se crea e inicializa una instancia de Estudiant

    struct Estudiante estudiante;
    strcpy(estudiante.nombre, "Sergio Baron");
    estudiante.edad = 23;
    estudiante.promedio = 9.5;