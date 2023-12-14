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
