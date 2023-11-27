#ifndef JUGADOR_H
#define JUGADOR_H

#include "persona.h"

class jugador : public persona { // Heredar de la clase persona
private:
    std::string posicion;

public:
    // Constructor
    jugador();

    // Métodos específicos para jugador
    void setPosicion(std::string posicion);
    std::string getPosicion();
    void imprimeDatos();
};

#endif /* JUGADOR_H */
