#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 30

typedef enum { Asistio, Falta, Tardanza } Estado;

struct Asistencia {
    char fecha[10];
    char materia[50];
    Estado estado;
};

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][50];
    int numMaterias;
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numAsistencias;
};

bool esFormatoFechaValido(const char* fecha) {
    // Validación simple del formato de la fecha (AAAA-MM-DD)
    return strlen(fecha) == 10 && fecha[4] == '-' && fecha[7] == '-';
}

bool materiaRegistrada(struct Estudiante *e, const char* materia) {
    for (int i = 0; i < e->numMaterias; i++) {
        if (strcmp(e->materias[i], materia) == 0) {
            return true;
        }
    }
    return false;
}

void agregarMateria(struct Estudiante *e, const char *materia) {
    if (e->numMaterias < MAX_MATERIAS) {
        strcpy(e->materias[e->numMaterias], materia);
        e->numMaterias++;
    }
}

void registrarAsistencia(struct Estudiante *e, const char *fecha, const char *materia, Estado estado) {
    if (!esFormatoFechaValido(fecha)) {
        printf("Error: Formato de fecha inválido.\n");
        return;
    }
    if (!materiaRegistrada(e, materia)) {
        printf("Error: Materia no registrada.\n");
        return;
    }
    // Registrar la asistencia
    strcpy(e->asistencias[e->numAsistencias].fecha, fecha);
    strcpy(e->asistencias[e->numAsistencias].materia, materia);
    e->asistencias[e->numAsistencias].estado = estado;
    e->numAsistencias++;
}

void mostrarAsistencias(const struct Estudiante *e) {
    printf("Asistencias de %s:\n", e->nombre);
    for (int i = 0; i < e->numAsistencias; i++) {
        printf("Fecha: %s, Materia: %s, Estado: ", e->asistencias[i].fecha, e->asistencias[i].materia);
        switch (e->asistencias[i].estado) {
            case Asistio: printf("Asistió\n"); break;
            case Falta: printf("Falta\n"); break;
            case Tardanza: printf("Tardanza\n"); break;
        }
    }
}

int main() {
    struct Estudiante estudiante = {"Miguel Herrero", 17, 5.5, {}, 0, {}, 0};
    agregarMateria(&estudiante, "Economia");
    registrarAsistencia(&estudiante, "2023-02-05", "Matematicas aplicadas a las Ciencias Sociales", Asistio);
    mostrarAsistencias(&estudiante);
    return 0;
}