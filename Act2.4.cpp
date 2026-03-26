#include <iostream>
using namespace std;
class Factura {
private:
    int idfact;
    float total;
    int impuesto;
    string moneda;
    bool estado;
    string metodo;
public:
    Factura(int id, float tot, int imp, string mone, bool est, string meto) {
        idfact = id;
        total = tot;
        impuesto = imp;
        moneda = mone;
        estado = est;
        metodo = meto;
    }
    float getTotal() {
        return total;
    }
    int getImpuesto() {
        return impuesto;
    }
    string getMoneda() {
        return moneda;
    }
    bool getEstado() {
        return estado;
    }
    string getMetodo() {
        return metodo;
    }
    void setTotal(float n_t) {
        total = n_t;
    }
    void setMoneda(string n_m) {
        moneda = n_m;
    }
    void setEstado(bool act) {
        estado = act;
    }
    void setMetodo(string n_met) {
        metodo = n_met;
    }
    void mostrarInfo() {
        if (estado == 0) {
            cout << "---FACTURA REGISTRADA---" << endl;
            cout << "id: " << idfact << endl;
            cout << "total de factura: " << total << endl;
            cout << "impuesto de: " << impuesto << "% " << endl;
            cout << "tipo de moneda: " << moneda << endl;
            cout << "Estado de pago de factura: " << "false" << endl;
            cout << "método de pago: " << metodo << endl;
            cout << "-------------------------------------" << endl;
        }
    }
        
};

int main()
{
    float monto = -1;
    string mond,met;
    while (monto <= 0 or monto > 100000000) {
        cout << "ingrese su monto total" << endl;
        cin >> monto;
        if (monto <= 0 or monto > 100000000)
            cout << "monto erroneo ingrese de nuevo(número bajo o exceso)" << endl;
    }

    bool conf = false;
    while (!conf) {
        cout << "ingrese moneda(soles/dolares): " << endl;
        cin >> mond;
        for (int i = 0; i < mond.length(); i++) {
            mond[i] = tolower(mond[i]);
        }
        conf = true;
        if (mond != "soles" and mond != "dolares") {
            cout << "ingrese bien la moneda... " << endl;
            conf = false;
        }
    }
    bool conf2 = false;
    while (!conf2) {
        cout << "ingrese el metodo(efectivo/tarejta/cheque): " << endl;
        cin >> met;
        for (int i = 0; i < met.length(); i++) {
            met[i] = tolower(met[i]);
        }
        conf2 = true;
        if (met != "efectivo" and met != "tarjeta" and met != "cheque") {
            cout << "ingrese el método... " << endl;
            conf2 = false;
        }
    }
    bool est = false;
    Factura registro(1, monto, 8, mond, est, met);
    registro.mostrarInfo();
}
//1.- La fecha y el número de factura de por si es la prueba de resgistro de un pago, si se llegara a manipluar de manera
// temeraria,  no habría sentido de que se registre las facturas en ese sistema
//2.- Lo combinaria con un "metodo de pago" que se utlizo en el pedido, se puede mostrar como información del pedido 
// para que sea más detallado.



