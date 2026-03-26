#include <iostream>   
#include <string>     
using namespace std;
// Clase avion
class Avion {
private:
     string Nomavion;
     string colord;
     int cantidadcom;
public: 
     Avion() {}
     // El constructor 
     Avion(string Nombre,string color ,int combustible){
        Nomavion = Nombre;
        colord = color;
        cantidadcom = combustible;
     }
     void mostrar () {
        cout << Nomavion << " ";
        cout << colord << " ";
        cout << cantidadcom << " ";
        cout << endl;
     }
     int getCombustible(){
        return cantidadcom;
     }
};
// Clase mision
class Mision {
private:
    string destino;
    int duracion;
    int tripulacion;

public:
    Mision() {}
    // El constructor 
    Mision(string d, int du, int t) {
        destino = d;
        duracion = du;
        tripulacion = t;
    }
    void mostrarMision() {
        cout << "Destino: " << destino << endl;
        cout << "Duracion: " << duracion << endl;
        cout << "Tripulacion: " << tripulacion << endl;
    }
    // Simulacion de la mision
    void simularMision(Avion a) {
        cout << "\nSimulando mision...\n";
        int necesario = duracion * 10; 
        if (a.getCombustible() >= necesario) {
            cout << "La mision se completo con exito" << endl;
        } else {
            cout << "No hay suficiente combustible" << endl;
        }
    }
};
// Programa principal
int main (){
    Avion numero1("F-22 Raptor","Plateado",500);
    Mision aplolo("Venezuela",30,5);
    numero1.mostrar();
    aplolo.mostrarMision();
    aplolo.simularMision(numero1);
    return 0;
}