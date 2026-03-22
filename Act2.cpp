#include <iostream>// Crear un
#include <ctype.h>
#include <cctype>
using namespace std;
class Persona {
private:
    string nombre, numero, dni, genero; //tanto como el numero celular y dni es privado
    int edad;
public:
    Persona(string n_, int e_,string d_,string nu_, string gen) {
        nombre = n_;
        edad = e_;
        dni = d_;
        numero = nu_;
        genero = gen;
    }
    string getGen() {
        return genero;
    }
    string getNombre() {
        return nombre;
    }
    int getEdad() {
        return edad;
    }
    string getDni() {
        return dni;
    }
    void setDni(string n_d) {
        dni = n_d;
    }
    string getNumero() {
        return numero;
    }
    void setNumero(string n_n) {
        numero = n_n;
    }
};

int main(){
    string nomb, number, _dni, g;
    int year = -1;
    cout << "información: " << endl;
    cout << "" << endl;
    cout << "nombre: " << endl;
    cin >> nomb;
    while (year < 0 or year > 110) {
        cout << "edad: " << endl;
        cin >> year;
        if (year < 0)
            cout << "numero negativo..." << endl;
    }
    bool conf = false, conf2 = false;
    while (!conf) {
        cout << "numero telefonico: " << endl;
        cin >> number;

        if (number.length() > 9) {
            cout << "Formato invalido, solo 9 numeros maximos" << endl << endl;
            continue;
        }
        if (number.length() < 9) {
            cout << "Formato invalido, coloque 9 numeros maximos" << endl << endl;
            continue;
        }
        conf = true;
        for (int digi = 0; digi < number.length(); digi++) {
            if (!isdigit(number[digi])) {
                cout << "numero erroneo, solo números no letras..." << endl;
                conf = false;
                break;
            }
        }
    }
    while (!conf2) {
        cout << "Dni: " << endl;
        cin >> _dni;
        if (_dni.length() > 8) {
            cout << "Formato invalido, solo 8 numeros maximos" << endl << endl;
            continue;
        }
        if (_dni.length() < 8) {
            cout << "Formato invalido, coloque 8 numeros maximos" << endl << endl;
            continue;
        }
        conf2 = true;
        for (int n = 0; n < _dni.length(); n++) {
            if (!isdigit(_dni[n])) {
                cout << "solo numeros, no letras..." << endl;
                conf2 = false;
                break;
            }
        }
    }
    bool conf3 = false;
    while (!conf3) {
        cout << "ingrese genero(Masculino/Femenino): " << endl;
        cin >> g;
        for (int i = 0; i < g.length(); i++) {
            g[i] = tolower(g[i]);
        }
        conf3 = true;
        if (g != "masculino" and g != "femenino") {
            cout << "ingrese bien la letra... " << endl;
            conf3 = false;
        }
    }
    cout << "creando registro..." << endl;
    Persona infor(nomb, year, _dni, number,g);
    cout << "registro completado! mostrando información" << endl;
    cout << infor.getNombre() << " | " << infor.getEdad() << " | " <<
        infor.getNumero() << " | " << infor.getDni() << " | " << infor.getGen() << endl;
}   
// 1.- La ventaja de los "setters" y "getters" es que ofrecen un orden, estructura y una metodologia de uso más practico
// 2.- para la edad validamos que sea mayor que 0 y menor que 110 años y para la validación del genero, mostramos la ópcion
// se pasa la cadena por un for, letra por letra se convierte en minusculas con la librería <cctype> y con if se valida la respuesta, si no,
// se manda a que responda de nuevo