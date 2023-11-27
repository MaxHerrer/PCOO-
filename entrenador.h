#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include <iostream>
#include <string>

class entrenador {
private:
    std::string nombre;
    std::string apellidos;
    std::string nacionalidad;

public:
    // Constructor
    entrenador();
    // Métodos para establecer y obtener datos del entrenador
    void setNombre(std::string nombre);
    void setApellidos(std::string apellidos);
    void setNacionalidad(std::string nacionalidad);
    std::string getNombre();
    std::string getApellidos();
    std::string getNacionalidad();
    void imprimeDatos();
};

#endif /* ENTRENADOR_H */
