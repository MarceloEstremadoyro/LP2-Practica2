#include <iostream>
using namespace std;
class Libro {
private:
    string autor;
    string titulo;
    string genero;
    int year;
public:
    Libro(string au, string tit, string gen,int an) {
        autor = au;
        titulo = tit;
        genero = gen;
        year = an;
    }
    int getYear() {
        return year;
    }
    string getAutor() {
        return autor;
    }
    string getTitulo() {
        return autor;
    }
    string getGenero() {
        return autor;
    }
    void setAutor(string n_a) {
        autor = n_a;
    }
    void setTitulo(string n_t) {
        titulo = n_t;
    }
    void setGenero(string n_g) {
        genero = n_g;
    }
    void mostrarInfo() {
        cout << "---INFORMACIÓN DE LIBRO REGISTRADO---" << endl;
        cout << "nombre del libro(titulo): " << titulo << endl;
        cout << "genero del libro: " << genero << endl;
        cout << "nombre del autor: " << autor << endl;
        cout << "anio de publicación: " << year << endl;    
        cout << "-------------------------------------" << endl;
    }
};
int main()
{
    string titu, aut, gene;
    int y = -1;
    cout << "Ingrese el titulo del libro: " << endl;
    cin >> titu;
    cout << "ingrese el genero del libro: " << endl;
    cin >> gene;
    cout << "Ingrese el autor del libro: " << endl;
    cin >> aut;
    while (y <= 1800 or y > 2026) {
        cout << "ingrese el año de publicación:" << endl;
        cin >> y;
        if (y <= 1800 or y > 2026)
            cout << "fuera de rango 1800 - 2026" << endl;
    }
    cout << "----------------------------------" << endl;
    cout << "        registro completado" << endl;
    Libro resg(aut, titu, gene,y);
    resg.mostrarInfo();
}
// 1.- Se me ocuerre la idea de no crear un "set" para el atributo titulo
// 2.- El encapsulamiento ayuda a tener un orden, teniendo este orden se puede tomar como una planilla 
// para seguir un sistema de codificacíon respecto al programa, su mayor aporte es la legibilidad que da
// al código siendo más amigable d  e actualizar