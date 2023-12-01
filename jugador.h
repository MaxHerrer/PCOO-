#ifndef JUGADOR_H
#define JUGADOR_H

#include "Persona.h"
#include <iostream>
#include <string>

class Jugador : public Persona { 
private:
    std::string posicion;

public:
    // Constructor
    Jugador();

    // Métodos específicos para jugador
    void setPosicion(std::string posicion);
    std::string getPosicion();
    void imprimeDatos();
};

// Implementación de los métodos de jugador

Jugador::Jugador() {}

void Jugador::setPosicion(std::string posicion) {
    this->posicion = posicion;
}

std::string Jugador::getPosicion() {
    return posicion;
}

void Jugador::imprimeDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellidos: " << apellidos << std::endl;
    std::cout << "Nacionalidad: " << nacionalidad << std::endl;
    std::cout << "Posición: " << posicion << std::endl;
}

#endif /* JUGADOR_H */
