#include <stdio.h>
#include <string.h>

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 30

// Enumeración para representar los diferentes estados de asistencia

typedef enum { Asistio, Falta, Tardanza } Estado;

// Estructura para almacenar la información de asistencia
struct Asistencia {
    char fecha[10];
    char materia[50];
    Estado estado;
};

// Estructura para almacenar la información de un estudiante

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][50];
    int numMaterias;
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numAsistencias;
};

// Función para agregar una materia al estudiante

void agregarMateria(struct Estudiante *e, const char *materia) {
    // Asegurarse de no exceder el límite de materias
    if (e->numMaterias < MAX_MATERIAS) {
        strcpy(e->materias[e->numMaterias], materia);
        e->numMaterias++;
    }
}

// Función para registrar la asistencia de un estudiante

void registrarAsistencia(struct Estudiante *e, const char *fecha, const char *materia, Estado estado) {
    // Asegurarse de no exceder el límite de asistencias
    if (e->numAsistencias < MAX_ASISTENCIAS) {
        strcpy(e->asistencias[e->numAsistencias].fecha, fecha);
        strcpy(e->asistencias[e->numAsistencias].materia, materia);
        e->asistencias[e->numAsistencias].estado = estado;
        e->numAsistencias++;
    }
}