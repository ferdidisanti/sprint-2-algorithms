#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Par" << endl;   // El residuo de dividir entre 2 es 0
    } else {
        cout << "Impar" << endl; // El residuo es diferente de 0
    }

    return 0;
}