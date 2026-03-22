#include <iostream>
using namespace std;
class Cuentabancaria {
private:
    float saldo;
    string nombre;
public:
    Cuentabancaria(float sal, string nom) {
        saldo = sal;
        nombre = nom;
    }
    float getSaldo() {
        return saldo;
    }
    string getNombre() {
        return nombre;
    }
    void depositar(float aum) {
        saldo = saldo + aum;
    }
    void retirar(float res) {
        saldo = saldo - res;
    }
};
int main()
{
    int opc = -1;
    float cap = -1;
    string nomb;
    cout << "ingrese su nombre: " << endl;
    cin >> nomb;
    while (cap <= 0 or cap > 100000000) {
        cout << "ingrese su capital" << endl;
        cin >> cap;
        if (cap <= 0 or cap > 100000000)
            cout << "monto erroneo ingrese de nuevo(número bajo o exceso)" << endl;
    }
    Cuentabancaria info(cap, nomb);
    while (opc != 1 and opc != 2) {
        cout << "ingrese 1 si va a depositar" << endl;
        cout << "ingrese 2 si va a retirar" << endl;
        cin >> opc;
        if (opc != 1 and opc != 2)
            cout << "error de número" << endl;
    }
    switch (opc) {
    case 1:
    {
        float din = -1;
        while (din <= 0) {
            cout << "ingrese la cantidad a depositar a su cuenta: " << endl;
            cin >> din;
            if (din <= 0)
                cout << "no se aceptan números negativos" << endl;
        }
        cout << "" << endl;
        cout << "operación exitosa" << endl;
        cout << "saldo antes: "<< info.getSaldo() << endl;
        info.depositar(din);
        cout << "saldo actual: " << info.getSaldo() <<endl;
        cout << "fin..." << endl;
        break;
    }
    case 2:
    {
        float din = -1;
        while (din <= 0 or din > info.getSaldo()) {
            cout << "ingrese la cantidad a retirar de su cuenta: " << endl;
            cin >> din;
            if (din <= 0)
                cout << "no se aceptan números negativos..." << endl;
            if (din > info.getSaldo()) {
                cout << "no se aceptan números mayor a su saldo de tarjeta..." << endl;
            }
        }
        cout << "" << endl;
        cout << "operación exitosa" << endl;
        cout << "saldo antes: " << info.getSaldo() << endl;
        cout << "retiro " << din << " soles de su cuenta " << endl;
        info.retirar(din);
        cout << "saldo actual: " << info.getSaldo() << endl;
        cout << "fin..." << endl;
        break;
    }
    }
}
// 1.- Al ser información sensible y mira de manipulaciones maliciosas se tiene que tomar en cuneta su seguridad y acceso
// 2.- Al ser registrados números de retiros que superan el saldo del titular, sería un error de lógica y no es factible 
// seguir con el programa, el dinero en cuentas bancarias son datos que tienen que tener orden y lógica para no afectar al cliente