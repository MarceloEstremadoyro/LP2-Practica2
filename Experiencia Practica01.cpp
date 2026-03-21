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
};

    // Clase Estudiante
    class Estudiante 
    {
        private:
            string nombre;
            int edad;
            int codigo;
            char grado;
            float calificacion;
            bool realizoExamen;
        public:
            // Constructor
            Estudiante(string n, int e, int co, char g, float ca, bool examen)
                : nombre(n), edad(e), codigo(co), grado(g), calificacion(ca), realizoExamen(examen) {}
            // Metodos
            void tomarExamen() {
                if (!realizoExamen) {
                    cout << nombre << " Realizo el examen." << endl;
                    realizoExamen = true;
                    calificacion = 0;
                } else { 
                    cout << nombre << " ya ha tomado el examen." << endl;
                }   
            }
            void RecibirCalificacion(float nota) 
            {
                if (realizoExamen) {
                    calificacion = nota;
                    cout << nombre << " recibio una calificacion de " << calificacion << endl;
                } else {
                    cout << "El estudiante " << nombre << " no ha tomado el examen." << endl;
                    calificacion=0; // Asegura que la calificación sea 0 si no ha tomado el examen
                }
            }
    };

        // Clase Tienda 
class Tienda {
    private:   
        string nombre;
        string direccion;
        string tipoDeTienda;
        int stock;
        int productosVendidos;
    public:
        // Constructor              
        Tienda(string n, string d, string t, int s) 
             : nombre(n), direccion(d), tipoDeTienda(t), stock(s), productosVendidos(0) {}
        // Métodos
        void agregarproducto(int cantidad) {
            stock += cantidad;
            cout << "Se agregaron " << cantidad << " productos a la tienda " << nombre << ". Stock actual: " << stock << endl;
        }
        void venderProducto(int cantidad) {
            if (cantidad <= stock) {
                stock -= cantidad;
                productosVendidos += cantidad;
                cout << "Se vendieron " << cantidad << " productos de la tienda " << nombre << ". Stock actual: " << stock << endl;
            } else {
                cout << "No hay suficiente stock para vender " << cantidad << " productos en la tienda " << nombre << ". Stock actual: " << stock << endl;
            }
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
    carro1.acelerar(50);
    carro1.acelerar(30);
    carro1.frenar(25);

    cout << "CARRO 2" << endl;
    Carro carro2("Mustang", "Cobra", "BBB-002", 1969);
    carro2.acelerar(250);
    carro2.frenar(200);

    cout << "FIN DE PRUEBAS" << endl;

    //PRUEBAS DE EXAMEN 
    cout << "PRUEBAS DE CLASE ESTUDIANTE" << endl;
    Estudiante estudiante1("Angel", 20, 12345, 'A', 0.0, false);
    estudiante1.tomarExamen();
    estudiante1.RecibirCalificacion(16.5);
    Estudiante estudiante2("Maria", 19, 67890, 'B', 0.0, false);
    estudiante2.tomarExamen();
    estudiante2.RecibirCalificacion(20.0); 

    //PRUEBAS DE TIENDA
    cout << "PRUEBAS DE CLASE TIENDA" << endl;
    Tienda tienda1("Cato tienda", "Calle Montesinos", "Ropa", 100);
    tienda1.agregarproducto(50);
    tienda1.venderProducto(20);
    tienda1.venderProducto(150); // Intento de vender más de lo que hay en stock    
        return 0;
}
