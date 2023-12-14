#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> // Para std::runtime_error

// Excepción personalizada por si hay errores de formato de fecha

class FechaFormatException : public std::runtime_error {
public:
    FechaFormatException(const std::string& msg) : std::runtime_error(msg) {}
};


