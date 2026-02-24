#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nombre;
    double precio , subtotal , total , iva;
    int cantidad;

    cout << "Ingrese su nombre: ";
    getline(cin,nombre);
    cout << "precio de producto: ";
    cin >> precio;
    cout << "Unidades: ";
    cin >> cantidad;

    subtotal = precio * cantidad;
    iva = subtotal * 0.12 ;
    total = subtotal + iva;

    cout << fixed << setprecision (2)

    << "\n--- FACTURA ---\n";
    cout<< "Cliente:" << nombre << endl
     << "Subtotal: Q" << subtotal << endl
     << "IVA (12%): Q" << iva << endl
     << "Total a pagar: Q" << total << endl;

    return 0;}
