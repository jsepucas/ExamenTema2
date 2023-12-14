#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

class FechaFormatException : public std::runtime_error {
public:
    FechaFormatException(const std::string& msg) : std::runtime_error(msg) {}
};

class MateriaNoRegistradaException : public std::runtime_error {
public:
    MateriaNoRegistradaException(const std::string& msg) : std::runtime_error(msg) {}
};

class Asistencia {
public:
    std::string fecha;
    std::string materia;
    enum Estado { Asistio, Falta, Tardanza } estado;

    Asistencia(const std::string& f, const std::string& m, Estado e) : fecha(f), materia(m), estado(e) {}
};

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
        if (fecha.length() != 10 || fecha[4] != '-' || fecha[7] != '-') {
            throw FechaFormatException("Formato de fecha inválido");
        }

        if (std::find(materias.begin(), materias.end(), materia) == materias.end()) {
            throw MateriaNoRegistradaException("Materia no registrada");
        }

        asistencias.emplace_back(fecha, materia, estado);
    }

    void mostrarAsistencias() const {
        std::cout << "Asistencias de " << nombre << ":\n";
        for (const auto& a : asistencias) {
            std::cout << "Fecha: " << a.fecha << ", Materia: " << a.materia << ", Estado: ";
            switch (a.estado) {
                case Asistencia::Asistio: std::cout << "Asiste a clase"; break;
                case Asistencia::Falta: std::cout << "Falta"; break;
                case Asistencia::Tardanza: std::cout << "LLega tarde"; break;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Estudiante estudiante{"Juan Sepulveda", 20, 8.5};

    try {
        estudiante.agregarMateria("Algebra");
        estudiante.registrarAsistencia("2023-08-16", "Calculo II", Asistencia::Asistio);
    } catch (const FechaFormatException& e) {
        std::cerr << "Error de formato de fecha: " << e.what() << std::endl;
    } catch (const MateriaNoRegistradaException& e) {
        std::cerr << "Error de materia no registrada: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    estudiante.mostrarAsistencias();
    return 0;

}