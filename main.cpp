#include <iostream>
#include <string>
#include "jugador.h"
#include "equipo.h"
#include "entrenador.h"
#include "persona.h"

void persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void persona::setApellidos(std::string apellidos) {
    this->apellidos = apellidos;
}

void persona::setNacionalidad(std::string nacionalidad) {
    this->nacionalidad = nacionalidad;
}

std::string persona::getNombre() {
    return nombre;
}

std::string persona::getApellidos() {
    return apellidos;
}

std::string persona::getNacionalidad() {
    return nacionalidad;
}

void equipo::imprimeDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "País: " << pais << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;

}

// Implementación de los métodos de jugador

jugador::jugador() {}

void jugador::setPosicion(std::string posicion) {
    this->posicion = posicion;
}

std::string jugador::getPosicion() {
    return posicion;
}

void jugador::imprimeDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellidos: " << apellidos << std::endl;
    std::cout << "Nacionalidad: " << nacionalidad << std::endl;
    std::cout << "Posición: " << posicion << std::endl;
}

// Implementación de los métodos de entrenador

entrenador::entrenador() {}

void entrenador::imprimeDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellidos: " << apellidos << std::endl;
    std::cout << "Nacionalidad: " << nacionalidad << std::endl;
}

equipo::equipo() {}

void equipo::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void equipo::setPais(std::string pais) {
    this->pais = pais;
}

void equipo::setCiudad(std::string ciudad) {
    this->ciudad = ciudad;
}

void equipo::setDivision(std::string division) {
    this->division = division;
}

std::string equipo::getNombre() {
    return nombre;
}

std::string equipo::getPais() {
    return pais;
}

std::string equipo::getCiudad() {
    return ciudad;
}

std::string equipo::getDivision() {
    return division;
}

int main() {
    // Creación del jugador y obtención de datos del usuario
    jugador miJugador;
    std::string nombreJugador, apellidosJugador, nacionalidadJugador, posicionJugador;

    std::cout << "Datos del jugador:" << std::endl;
    std::cout << "Escribe el nombre del jugador: ";
    std::getline(std::cin, nombreJugador);
    std::cout << "Escribe los apellidos del jugador: ";
    std::getline(std::cin, apellidosJugador);
    std::cout << "Escribe la nacionalidad del jugador: ";
    std::getline(std::cin, nacionalidadJugador);
    std::cout << "Escribe la posición del jugador: ";
    std::getline(std::cin, posicionJugador);

    // Establecer los datos del jugador con los valores ingresados por el usuario
    miJugador.setNombre(nombreJugador);
    miJugador.setApellidos(apellidosJugador);
    miJugador.setNacionalidad(nacionalidadJugador);
    miJugador.setPosicion(posicionJugador);

    // Imprimir los datos del jugador
    std::cout << "\nDatos del jugador:" << std::endl;
    miJugador.imprimeDatos();

    // Creación del equipo y obtención de datos del usuario
    equipo miEquipo;
    std::string nombreEquipo, paisEquipo, ciudadEquipo, divisionEquipo;

    std::cout << "\nDatos del equipo:" << std::endl;
    std::cout << "Escribe el nombre del equipo: ";
    std::getline(std::cin, nombreEquipo);
    std::cout << "Escribe el país del equipo: ";
    std::getline(std::cin, paisEquipo);
    std::cout << "Escribe la ciudad del equipo: ";
    std::getline(std::cin, ciudadEquipo);
    std::cout << "Escribe la división del equipo: ";
    std::getline(std::cin, divisionEquipo);

    // Establecer los datos del equipo con los valores ingresados por el usuario
    miEquipo.setNombre(nombreEquipo);
    miEquipo.setPais(paisEquipo);
    miEquipo.setCiudad(ciudadEquipo);
    miEquipo.setDivision(divisionEquipo);

    // Imprimir los datos del equipo
    std::cout << "\nDatos del equipo:" << std::endl;
    miEquipo.imprimeDatos();

    // Creación del entrenador y obtención de datos del usuario
    entrenador miEntrenador;
    std::string nombreEntrenador, apellidosEntrenador, nacionalidadEntrenador;

    std::cout << "\nDatos del entrenador:" << std::endl;
    std::cout << "Escribe el nombre del entrenador: ";
    std::getline(std::cin, nombreEntrenador);
    std::cout << "Escribe los apellidos del entrenador: ";
    std::getline(std::cin, apellidosEntrenador);
    std::cout << "Escribe la nacionalidad del entrenador: ";
    std::getline(std::cin, nacionalidadEntrenador);

    // Establecer los datos del entrenador con los valores ingresados por el usuario
    miEntrenador.setNombre(nombreEntrenador);
    miEntrenador.setApellidos(apellidosEntrenador);
    miEntrenador.setNacionalidad(nacionalidadEntrenador);

    // Imprimir los datos del entrenador
    std::cout << "\nDatos del entrenador:" << std::endl;
    miEntrenador.imprimeDatos();

    // Transferir al jugador al equipo (ejemplo de relación)
    std::cout << "\nTransferencia de " << miJugador.getNombre() << " al equipo " << miEquipo.getNombre() << "." << std::endl;

    return 0;
}
