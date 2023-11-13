#include <iostream>

using namespace std;

class entrenador {
    
    private:
        // Datos del entrenador
        string nombre;
        string apellidos;
        string nacionalidad;
    
    public:
        // Constructor
        entrenador();

        // Métodos para establecer los datos del entrenador
        string getNombre();
        string getApellidos();
        string getNacionalidad();

        // Métodos para obtener los datos del entrenador
        void imprimeDatos();
};