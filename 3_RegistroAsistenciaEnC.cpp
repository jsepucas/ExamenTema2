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