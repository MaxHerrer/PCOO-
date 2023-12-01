#include <iostream>
#include <string>
#include "Jugador.h"
#include "Equipo.h"
#include "Entrenador.h"
#include "Persona.h"

int main() {
    // Creación del jugador y obtención de datos del usuario
    Jugador miJugador;
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
    Equipo miEquipo;
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
    Entrenador miEntrenador;
    std::string nombreEntrenador, apellidosEntrenador, nacionalidadEntrenador, ganadosEntrenador;

    std::cout << "\nDatos del entrenador:" << std::endl;
    std::cout << "Escribe el nombre del entrenador: ";
    std::getline(std::cin, nombreEntrenador);
    std::cout << "Escribe los apellidos del entrenador: ";
    std::getline(std::cin, apellidosEntrenador);
    std::cout << "Escribe la nacionalidad del entrenador: ";
    std::getline(std::cin, nacionalidadEntrenador);
    std::cout << "Escribe los partidos ganados del entrenador: ";
    std::getline(std::cin, ganadosEntrenador);

    // Establecer los datos del entrenador con los valores ingresados por el usuario
    miEntrenador.setNombre(nombreEntrenador);
    miEntrenador.setApellidos(apellidosEntrenador); 
    miEntrenador.setNacionalidad(nacionalidadEntrenador);
    miEntrenador.setGanados(ganadosEntrenador);
  
    // Imprimir los datos del entrenador
    std::cout << "\nDatos del entrenador:" << std::endl;
    miEntrenador.imprimeDatos();

    // Transferir al jugador al equipo (ejemplo de relación)
    std::cout << "\nTransferencia de " << miJugador.getNombre() << " al equipo " << miEquipo.getNombre() << "." << std::endl;

    return 0;
}
