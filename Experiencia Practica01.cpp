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
int main() {
    cout << "Experiencia Practica 01:\n";
    //PERRO
    cout << "PERRO" << endl;
    Animal perro("Pug Carlino", "Canino", 3, "carne");
    perro.hacerSonido();
    perro.alimentar();

    //GATO
    cout << "GATO" << endl;
    Animal gato("Esfinge", "Felino", 26, "pescado");
    gato.hacerSonido();
    gato.alimentar();

    //CABALLO
    cout << "CABALLO" << endl;
    Animal caballo("Mustang", "Equino", 5, "Hierba");
    caballo.hacerSonido();
    caballo.alimentar();

    cout << "\n fin \n" << endl;
    return 0;
}
 