#include <iostream>
#include "jugador.h"
#include "equipo.h"
#include "entrenador.h"

using namespace std;

string main() {

    jugador miJugador;
    miJugador.imprimeDatos();

    string nombre;
    string apellidos;
    string nacionalidad;
    string posicion;

    cout << "Escribe el nombre del jugador: ";
    cin >> nombre;
    cout << "Escribe los apellidos del jugador: ";
    cin >> apellidos;
    cout << "Escribe la nacionalidad del jugador: ";
    cin >> nacionalidad;
    cout << "Escribe la posicion del jugador: ";
    cin >> posicion;
    
    equipo miEquipo;
    miEquipo.imprimeDatos();

    string nombre;
    string pais;
    string ciudad;
    string division;

    cout << "Escribe el nombre del equipo: ";
    cin >> nombre;
    cout << "Escribe el pais del equipo: ";
    cin >> pais;
    cout << "Escribe la ciudad del equipo: ";
    cin >> ciudad;
    cout << "Escribe la division del equipo: ";
    cin >> division;

    entrenador miEntrenador;
    miEntrenador.imprimeDatos();

    string nombre;
    string apellidos;
    string nacionalidad;

    cout << "Escribe el nombre del entrenador: ";
    cin >> nombre;
    cout << "Escribe los apellidos del entrenador: ";
    cin >> apellidos;
    cout << "Escribe la nacionalidad del entrenador: ";
    cin >> nacionalidad;
}

