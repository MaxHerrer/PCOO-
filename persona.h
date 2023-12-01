#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class Persona {
protected: 
    std::string nombre;
    std::string apellidos;
    std::string nacionalidad;

public:
    // Constructor
    Persona();

    // Métodos específicos para jugador
    void setNombre(std::string nombre);
    void setApellidos(std::string apellidos);
    void setNacionalidad(std::string nacionalidad);
    std::string getNombre();
    std::string getApellidos();
    std::string getNacionalidad();
    void imprimeDatos();
};

// Implementación de los métodos de persona
void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setApellidos(std::string apellidos) {
    this->apellidos = apellidos;
}

void Persona::setNacionalidad(std::string nacionalidad) {
    this->nacionalidad = nacionalidad;
}

std::string Persona::getNombre() {
    return nombre;
}

std::string Persona::getApellidos() {
    return apellidos;
}  

std::string Persona::getNacionalidad() {
    return nacionalidad;
}

#endif /* PERSONA_H */
