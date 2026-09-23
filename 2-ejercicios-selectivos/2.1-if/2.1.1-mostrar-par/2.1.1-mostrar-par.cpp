#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    // Operador '%' (módulo) obtiene el residuo de la división entre 2
    if (numero % 2 == 0) {
        cout << "Par" << endl;
    }
    // Si no es par, la estructura simplemente finaliza sin hacer nada

    return 0;
}