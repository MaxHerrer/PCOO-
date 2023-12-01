#ifndef EQUIPO_H
#define EQUIPO_H

#include <iostream>
#include <string>

class Equipo {
private:
    std::string nombre;
    std::string pais;
    std::string ciudad;
    std::string division;

public:
    // Constructor
    Equipo();

    // Métodos para establecer y obtener datos del equipo
    void setNombre(std::string nombre);
    void setPais(std::string pais);
    void setCiudad(std::string ciudad);
    void setDivision(std::string division);
    std::string getNombre();
    std::string getPais();
    std::string getCiudad();
    std::string getDivision();
    void imprimeDatos();
};

// Implementación de los métodos de equipo

Equipo::Equipo() {}

void Equipo::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Equipo::setPais(std::string pais) {
    this->pais = pais;
}

void Equipo::setCiudad(std::string ciudad) {
    this->ciudad = ciudad;
}

void Equipo::setDivision(std::string division) {
    this->division = division;
}

std::string Equipo::getNombre() {
    return nombre;
}

std::string Equipo::getPais() {
    return pais;
}

std::string Equipo::getCiudad() {
    return ciudad;
}

std::string Equipo::getDivision() {
    return division;
}

void Equipo::imprimeDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "País: " << pais << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;

}

#endif /* EQUIPO_H */
