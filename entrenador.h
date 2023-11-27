#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include "persona.h"
#include <iostream>
#include <string>

class entrenador : public persona {
public:
    // Constructor
    entrenador();
    // Método para establecer y obtener datos del entrenador
    void imprimeDatos();
};

#endif /* ENTRENADOR_H */
