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

void eliminarMateria(Estudiante &e, const std::string &materia) {
    auto it = std::find(e.materias.begin(), e.materias.end(), materia);
    if (it != e.materias.end()) {
        e.materias.erase(it);
    }
}

void mostrarMaterias(const Estudiante &e) {
    std::cout << "Materias de " << e.nombre << ":" << std::endl;
    for (const auto &materia : e.materias) {
        std::cout << " - " << materia << std::endl;
    }
}

