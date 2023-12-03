#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include "Persona.h"
#include <iostream>
#include <string>

class Entrenador : public Persona {
private:
    std::string ganados;
public:
    // Constructor
    Entrenador();

    // Métodos específicos para entrenador
    void setGanados(std::string ganados);
    std::string getGanados();
    void imprimeDatos();
};

// Implementación de los métodos de entrenador

Entrenador::Entrenador() {}

void Entrenador::setGanados(std::string ganados) {
    this->ganados = ganados;
}

std::string Entrenador::getGanados() {
    return ganados;
}

void Entrenador::imprimeDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellidos: " << apellidos << std::endl;
    std::cout << "Nacionalidad: " << nacionalidad << std::endl;
    std::cout << "Ganados: " << ganados << std::endl;
}

#endif /* ENTRENADOR_H */
