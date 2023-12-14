#include <stdio.h>
#include <string.h>

#define MAX_MATERIAS 10

// Definimos la estructura del estudiante

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][50];
    int numMaterias;
};

// Funciones en las que gestionamos las materias

void agregarMateria(struct Estudiante *e, const char *materia) {
    // tu código existente...
}

void eliminarMateria(struct Estudiante *e, const char *materia) {
    // tu código existente...
}

void mostrarMaterias(const struct Estudiante *e) {
    // tu código existente...
}

// Función para mostrar los datos del estudiante
void mostrarEstudiante(const struct Estudiante *e) {
    printf("Nombre: %s\n", e->nombre);
    printf("Edad: %d\n", e->edad);
    printf("Promedio: %.2f\n", e->promedio);
    mostrarMaterias(e);
}

int main() {
    // Creamos e inicializamos una instancia de Estudiante
    struct Estudiante estudiante = {"Miguel Ortiz", 17, 7.5, {}, 0};

    // Volvemos a agregar las materias
    agregarMateria(&estudiante, "Filosofia");
    agregarMateria(&estudiante, "Historia de España");

    // Mostrar los datos del estudiante
    mostrarEstudiante(&estudiante);

    return 0;
}
