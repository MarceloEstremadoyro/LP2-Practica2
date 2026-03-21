#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


// CLASE CARRO
class Carro {
private:
    string jugador;
    string marca;
    string modelo;
    int velocidad;
    float distancia;

public:
    // Constructor
    Carro(string j, string ma, string mo) 
        : jugador(j), marca(ma), modelo(mo), velocidad(0), distancia(0) {}

    // Getters
    string getJugador() {
        return jugador;
    }

    int getVelocidad() {
        return velocidad;
    }

    float getDistancia() {
        return distancia;
    }

    // Acelerar
    void acelerar(int incremento) {
        velocidad += incremento;
        distancia += incremento;
        cout << jugador << " acelera en " << marca << " " << modelo 
             << " a " << velocidad << " km/h. Distancia: " << distancia << " km" << endl;
    }

    // Reiniciar
    void reiniciar() {
        velocidad = 0;
        distancia = 0;
    }
};

// CLASE CARRERA
class Carrera {
private:
    Carro* jugador;
    Carro* computadora;
    float distanciaTotal;

public:
    // Constructor
    Carrera(string nombreJugador, float distancia) 
        : distanciaTotal(distancia) {
        jugador = new Carro(nombreJugador, "Mustang", "GT");
        computadora = new Carro("Computadora", "Tesla", "Model 3");
    }

    // Destructor
    ~Carrera() {
        delete jugador;
        delete computadora;
    }

    // Ejecutar la carrera
    void comenzar() {
        cout << "\nCarrera hasta " << distanciaTotal << " km\n" << endl;
        
        while (jugador->getDistancia() < distanciaTotal && 
               computadora->getDistancia() < distanciaTotal) {
            
            // Turno del jugador
            cout << "Tu turno (1=Acelerar): ";
            int opcion;
            cin >> opcion;
            
            jugador->acelerar(50);
            
            // Turno de computadora
            int velocidad = 40 + (rand() % 21);
            computadora->acelerar(velocidad);
            
            // Mostrar estado
            cout << "\nJugador: " << jugador->getDistancia() << " km" << endl;
            cout << "Computadora: " << computadora->getDistancia() << " km\n" << endl;
        }
        
        // Ganador
        if (jugador->getDistancia() >= distanciaTotal) {
            cout << "Ganaste!" << endl;
        } else {
            cout << "Perdiste!" << endl;
        }
    }
};

// Funcion main
int main() {
    srand(time(0));
    string nombre;
    float distancia;
    char repetir;
    do {
        cout << "Ingresa tu nombre: ";
        cin >> nombre;
        cout << "Distancia de la carrera (km): ";
        cin >> distancia;
        Carrera carrera(nombre, distancia);
        carrera.comenzar();
        cout << "\n¿Deseas jugar otra vez? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
    return 0;
}
