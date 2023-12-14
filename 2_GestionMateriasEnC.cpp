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
    if (e->numMaterias < MAX_MATERIAS) {
        strcpy(e->materias[e->numMaterias], materia);
        e->numMaterias++;
    }
}

void eliminarMateria(struct Estudiante *e, const char *materia) {
    for (int i = 0; i < e->numMaterias; i++) {
        if (strcmp(e->materias[i], materia) == 0) {
            for (int j = i; j < e->numMaterias - 1; j++) {
                strcpy(e->materias[j], e->materias[j + 1]);
            }
            e->numMaterias--;
            break;
        }
    }
}

void mostrarMaterias(const struct Estudiante *e) {
    printf("Materias de %s:\n", e->nombre);
    for (int i = 0; i < e->numMaterias; i++) {
        printf(" - %s\n", e->materias[i]);
    }
}
