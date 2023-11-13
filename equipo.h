#include <iostream>

using namespace std;

class equipo {
    
    private:
        // Datos del equipo
        string nombre;
        string pais;
        string ciudad;
        string division;
    
    public:
        // Constructor
        equipo();

        // Métodos para establecer los datos del equipo
        string getNombre();
        string getPais();
        string getCiudad();
        string getDivision();

        // Métodos para obtener los datos del equipo
        void imprimeDatos();
};