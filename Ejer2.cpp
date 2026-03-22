#include <iostream> 
#include <vector> 
#include <cctype> 
using namespace std;

class Inventario {
private:
    string nombre;
    bool estado;
public:
    Inventario(string nom, bool est) {
        nombre = nom;
        estado = est;
    }
    bool getEstado() {
        return estado;
    }
    string getNombre() {
        return nombre;
    }
    void setNombre(string actn) {
        nombre = actn;
    }
    void setEstado(bool acte) {
        estado = acte;
    }
};
vector<Inventario> lista_i;
int main() {
    Inventario registro("camisa", true);
    lista_i.push_back(registro);
    Inventario registro2("gorra", true);
    lista_i.push_back(registro2);
    Inventario registro3("terno", false);
    lista_i.push_back(registro3);
    for (int ind = 0; ind < 7; ind++) {
        cout << "producto: " << lista_i[ind].getNombre() << endl;
        if (lista_i[ind].getEstado() == 0)
            cout << "estado de stock: no disponible" << endl;
        else
            cout << "estado de stock: disponible" << endl;
    }
    string n_p;
    bool e_p, confir = false;
    while (!confir) {
        cout << "ingrese el nombre del nuevo producto: " << endl;
        cin >> n_p;
        confir = true;
        for (int y = 0; y < lista_i.size();y++) {
            if (n_p == lista_i[y].getNombre()) {
                cout << "nombre ya en inventario" << endl;
                confir = false;
            }
        }
    }
    e_p = true;
    Inventario contenido(n_p, e_p);
    lista_i.push_back(contenido);
    cout << "" << endl;
    cout << "producto registrado con exito!!!" << endl;
    cout << "" << endl;
    cout << "elija el numero del producto: " << endl;
    for (int i = 0; i < lista_i.size(); i++) {
        cout << i + 1 << " nombre: " << lista_i[i].getNombre() << endl;
    }
    int cont = -1;
    int tama = lista_i.size();
    while (cont < 1 or cont > tama) {
        cin >> cont;
        if (cont < 1 or cont > tama)
            cout << "Número incorrecto, ingrese de nuevo..." << endl;
    }
    cout << "-----que desea actualizar-----" << endl;
    cout << "1.-  nombre del producto      " << endl;
    cout << "2.-    estado de stock        " << endl;
    cout << "------------------------------" << endl;
    int cont2 = -1;
    int tama2 = lista_i.size();
    while (cont2 < 1 or cont > tama2) {
        cin >> cont2;
        if (cont2 < 1 or cont > tama2)
            cout << "Número incorrecto, ingrese de nuevo..." << endl;
    }
    switch (cont2) {
    case 1:
    {
        string n_nom;
        cout << "ingrese el nuevo nombre del producto: " << endl;
        cin >> n_nom;
        lista_i[cont].setNombre(n_nom);
        cout << "actualización terminada!!!" << endl;
    }
    case 2:
    {
        bool n_est = true, conf3 = false;
        while (!conf3) {
            string resp;
            cout << "ingrese el estado del producto (verdad | falso): " << endl;
            cin >> resp;
            if (resp == "verdad") {
                n_est = true;
                conf3 = true;
            }
                
            if (resp == "falso") {
                conf3 = true;
                n_est = false;
            }
            else {
                cout << "entrada invalida..." << endl;
                continue;
            }
        }
        lista_i[cont-1].setEstado(n_est);
        cout << "actualización terminada!!!" << endl;
        }
    }
    cout << "----------INVENTARIO GENERAL----------" << endl;
    for (int paso = 0;paso < lista_i.size(); paso++) {
        
        cout << "nombre del producto: " << lista_i[paso].getNombre();
        if (lista_i[paso].getEstado() == 0)
            cout << "estado stock: no disponible" << endl;
        if (lista_i[paso].getEstado() == 1)
            cout << "estado stock: disponible" << endl;
    }
}