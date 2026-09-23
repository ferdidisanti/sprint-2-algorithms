#include <iostream>

using namespace std;

int main() {
    double nota;
    cout << "Ingresa tu nota: ";
    cin >> nota;

    if (nota >= 70) {
        cout << "Aprobado" << endl; // Si cumple la condición (V)
    } else {
        cout << "Reprobado" << endl; // Si NO cumple la condición (F)
    }

    return 0;
}