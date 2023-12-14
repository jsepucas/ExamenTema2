#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

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
