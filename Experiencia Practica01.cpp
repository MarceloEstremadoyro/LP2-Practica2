#include <iostream>
#include <string>
using namespace std;

// CLASE Animal
class Animal {
private:
    string nombre;          
    string familia;            
    int edad;               
    string dieta;           

public:
    // Constructor
    Animal(string n, string s, int e, string d = "desconocida") 
        : nombre(n), familia(s), edad(e), dieta(d) {}

    // Metodo: alimentar 
    void alimentar() {
        cout << nombre << " esta siendo alimentado con " << dieta << "." << endl;
    }

    // Metodo: hacerSonido
    void hacerSonido() {
        cout << nombre << " : ";
        
        if (familia == "Canino") {
            cout << "Guau" << endl;
        } 
        else if (familia == "Felino") {
            cout << "Miau" << endl;
        } 
        else if (familia == "Equino") {
            cout << "Hii Hii" << endl;
        }
    }
};

    // CLASE CARRO
class Carro {
private:
    string marca;
    string modelo;
    string placa;
    int velocidad;
    int year;

public:
    // Constructor
    Carro(string ma, string mo, string p, int y) 
        : marca(ma), modelo(mo), placa(p), velocidad(0), year(y) {}

    // Metodo: acelerar
    void acelerar(int incremento) {
        velocidad += incremento;
        cout << "El carro " << marca << " " << modelo << " acelera a " 
             << velocidad << " km/h" << endl;
    }

    // Metodo: frenar
    void frenar(int decremento) {
        velocidad -= decremento;
        if (velocidad < 0) {
            velocidad = 0;
        }
        cout << "El carro " << marca << " " << modelo << " frena a " 
             << velocidad << " km/h" << endl;
    }

    // Metodo: mostrarInfo
    void mostrarInfo() {
        cout << "\n--- INFO DEL CARRO ---" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Placa: " << placa << endl;
        cout << "Año: " << year << endl;
        cout << "Velocidad actual: " << velocidad << " km/h" << endl;
    }
};


int main() {

    cout << "EXPERIENCIA PRACTICA 01 - POO" << endl;

    //  PRUEBAS DE ANIMALES
    cout << "PRUEBAS DE CLASE ANIMAL" << endl;
    
    cout << "PERRO" << endl;
    Animal perro("Pug Carlino", "Canino", 3, "carne");
    perro.hacerSonido();
    perro.alimentar();

    cout << "GATO" << endl;
    Animal gato("Esfinge", "Felino", 2, "pescado");
    gato.hacerSonido();
    gato.alimentar();

    cout << "CABALLO" << endl;
    Animal caballo("Mustang", "Equino", 5, "hierba");
    caballo.hacerSonido();
    caballo.alimentar();

    //PRUEBAS DE CARROS
    cout << "PRUEBAS DE CLASE CARRO" << endl;

    cout << "CARRO 1" << endl;
    Carro carro1("Tesla", "Model 3", "AAA-001", 2020);
    carro1.mostrarInfo();
    carro1.acelerar(50);
    carro1.acelerar(30);
    carro1.frenar(25);
    carro1.mostrarInfo();

    cout << "CARRO 2" << endl;
    Carro carro2("Mustang", "Cobra", "BBB-002", 1969);
    carro2.mostrarInfo();
    carro2.acelerar(250);
    carro2.frenar(200);
    carro2.mostrarInfo();

    cout << "FIN DE PRUEBAS";

    return 0;
}
 