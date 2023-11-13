#include <iostream>

using namespace std;

class jugador {
    
    private:
        // Datos del jugador
        string nombre;
        string apellidos;
        string nacionalidad;
        string posicion;
    
    public:
        // Constructor
        jugador();

        // Métodos para establecer los datos del jugador
        string getNombre();
        string getApellidos();
        string getNacionalidad();
        string getPosicion();

        // Métodos para obtener los datos del jugador
        void imprimeDatos();
};