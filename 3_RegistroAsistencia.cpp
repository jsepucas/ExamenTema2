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
