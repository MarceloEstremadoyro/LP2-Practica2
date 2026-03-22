#include <iostream> 
using namespace std; 
class Animal { 
private: 
    string nombre; 
    string familia; 
    int edad; 
    string dieta; 
public: 
    Animal(string n, string f, int e, string d) { 
        nombre = n; 
        familia = f; 
        edad = e; 
        dieta = d; 
    } 
    string getNombre() { return nombre; } 
    int getEdad() { return edad; } 
    void setEdad(int e) { edad = e; } 
    void mostrar() { 
        cout << nombre << " " 
             << familia << " " 
             << edad << " " 
             << dieta << endl; 
    } 

}; 
class Carro { 
private: 
    string marca; 
    string modelo; 
    string placa; 
    int year; 
public: 
    Carro(string ma, string mo, string p, int y) { 
        marca = ma; 
        modelo = mo; 
        placa = p; 
        year = y; 

    } 
    string getMarca() { return marca; } 
    void setMarca(string m) { marca = m; } 
    void mostrar() { 
        cout << marca << " " 
             << modelo << " " 
             << placa << " " 
             << year << endl; 

    } 
}; 
int main() { 
    Animal a1("Firulais","Canino",3,"Carne"); 
    Animal a2("Michi","Felino",2,"Pescado"); 
    Carro c1("Toyota","Corolla","ABC123",2020); 
    Carro c2("Nissan","Sentra","XYZ999",2019); 
    a1.mostrar(); 
    a2.mostrar(); 
    c1.mostrar(); 
    c2.mostrar(); 
    a1.setEdad(5); 
    c1.setMarca("Kia"); 
    cout << "\nModificados\n"; 
    a1.mostrar(); 
    c1.mostrar(); 
    return 0; 
} 

#include <vector> 
using namespace std; 
class Animal { 
private: 
    string nombre; 
    string familia; 
    int edad; 
    string dieta;  
public: 

    Animal(string n, string f, int e, string d) { 
        nombre = n; 
        familia = f; 
        edad = e; 
        dieta = d; 
    }
    string getNombre() { return nombre; } 
    void mostrar() { 
        cout << nombre << " " 
             << familia << " " 
             << edad << " " 
             << dieta << endl; 
    } 
}; 
int main() { 
    vector<Animal> animales; 
    animales.push_back(Animal("Firulais","Canino",3,"Carne")); 
    animales.push_back(Animal("Michi","Felino",2,"Pescado")); 
    animales.push_back(Animal("Spirit","Equino",5,"Pasto")); 
    for (int i = 0; i < animales.size(); i++) { 
        animales[i].mostrar(); 
    } 
    string buscar = "Michi"; 
    for (int i = 0; i < animales.size(); i++) { 
        if (animales[i].getNombre() == buscar) { 
            cout << "Encontrado\n"; 
        } 
    } 
    return 0; 
} 

using namespace std; 
class Animal { 
private: 
    string nombre; 
    int edad; 
public: 
    Animal(string n, int e) { 
        nombre = n; 
        edad = e; 
    } 
    string getNombre() { return nombre; } 
    void setEdad(int e) { edad = e; } 
    void mostrar() { 
        cout << nombre << " " << edad << endl; 
    } 
}; 
int main() { 
    vector<Animal> lista; 
    lista.push_back(Animal("Firulais",3)); 
    lista.push_back(Animal("Michi",2)); 
    lista.push_back(Animal("Luna",4)); 
    cout << "ANTES\n"; 
    for (int i = 0; i < lista.size(); i++) { 
        lista[i].mostrar(); 
    } 
    // eliminar 
    string eliminar = "Michi"; 
    for (int i = 0; i < lista.size(); i++) { 
        if (lista[i].getNombre() == eliminar) { 
            lista.erase(lista.begin() + i); 
            break; 
        } 
    } 
    // actualizar 
    lista[0].setEdad(10); 
    cout << "\nDESPUES\n"; 
    for (int i = 0; i < lista.size(); i++) { 
        lista[i].mostrar(); 
    } 
    return 0; 
} 

#include <iostream> 
using namespace std; 
class Libro { 
private: 
    string titulo; 
    string autor; 
public: 
    Libro(string t, string a) { 
        titulo = t; 
        autor = a; 
    } 
    bool esIgualA(Libro otro) { 
        if (titulo == otro.titulo && 
            autor == otro.autor) { 
            return true; 
        }
        return false; 
    }   
}; 
int main() { 
    Libro l1("C++","Bjarne"); 
    Libro l2("C++","Bjarne"); 
    if (l1.esIgualA(l2)) { 
        cout << "Son iguales"; 
    } 
    else { 
        cout << "No son iguales"; 
    } 
    return 0; 

} 