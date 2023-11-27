#ifndef EQUIPO_H
#define EQUIPO_H

#include <iostream>
#include <string>

class equipo {
private:
    std::string nombre;
    std::string pais;
    std::string ciudad;
    std::string division;

public:
    // Constructor
    equipo();
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

#endif /* EQUIPO_H */
