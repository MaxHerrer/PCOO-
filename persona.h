#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class persona {
protected:
    std::string nombre;
    std::string apellidos;
    std::string nacionalidad;

public:
    void setNombre(std::string nombre);
    void setApellidos(std::string apellidos);
    void setNacionalidad(std::string nacionalidad);
    std::string getNombre();
    std::string getApellidos();
    std::string getNacionalidad();
    void imprimeDatos();
};

#endif /* PERSONA_H */
