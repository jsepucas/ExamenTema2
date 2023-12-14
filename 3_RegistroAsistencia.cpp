#include <iostream>
#include <string>
#include <vector>

// Asistencia de la clase
class Asistencia {
public:
    std::string fecha;
    std::string materia;
    enum Estado { Asistio, Falta, Tardanza } estado;

    Asistencia(const std::string& f, const std::string& m, Estado e) : fecha(f), materia(m), estado(e) {}
};

// Realizamos la estructura Estudiante

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<Asistencia> asistencias;

    void agregarMateria(const std::string& materia) {
        materias.push_back(materia);
    }

    void registrarAsistencia(const std::string& fecha, const std::string& materia, Asistencia::Estado estado) {
        asistencias.emplace_back(fecha, materia, estado);
    }

    void mostrarAsistencias() const {
        std::cout << "Asistencias de " << nombre << ":\n";
        for (const auto& a : asistencias) {
            std::cout << "Fecha: " << a.fecha << ", Materia: " << a.materia << ", Estado: ";
            switch (a.estado) {
                case Asistencia::Asistio: std::cout << "Asistio a clase"; break;
                case Asistencia::Falta: std::cout << "Falta"; break;
                case Asistencia::Tardanza: std::cout << "Tarde a clase"; break;
            }
            std::cout << std::endl;
        }
    }
};

// Ahora agregamos funcion donde se muestran los datos del estudiante

int main() {
    Estudiante estudiante{"Carlos Sanchez", 20, 8.5};
    estudiante.agregarMateria("Fisica");
    estudiante.registrarAsistencia("2023-12-12", "Matematicas", Asistencia::Asistio);
    estudiante.mostrarAsistencias();
    return 0;
}
