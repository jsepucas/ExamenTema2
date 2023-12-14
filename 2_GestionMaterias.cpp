#include <iostream>
#include <string>
#include <vector>

// Definición estructura de estudiante

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
};

// Añadimos unciones para manejar materias

void agregarMateria(Estudiante &e, const std::string &materia) {
    e.materias.push_back(materia);
}
