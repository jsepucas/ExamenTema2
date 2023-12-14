#include <iostream>
#include <string>

// Aquí se define la estructura del estudiante

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// En esta función mostramos los datos del estudiante

void mostrarEstudiante(Estudiante e) {
    std::cout << "Nombre: " << e.nombre << std::endl;
    std::cout << "Edad: " << e.edad << std::endl;
    std::cout << "Promedio: " << e.promedio << std::endl;
}

int main() {

    // Aquí se crea e inicializa una instancia de Estudiante

    Estudiante estudiante = {"Sergio Barón", 23, 9.5};

    // Por último mostramos los datos del estudiante
    mostrarEstudiante(estudiante);

    return 0;
}
