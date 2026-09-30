#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    int suma = 0;

    cout << "Ingresa números para sumar (ingresa 0 para terminar):" << endl;

    do {
        cin >> numero;
        suma += numero;
    } while (numero != 0);

    cout << "Resultado: " << suma << endl;

    return 0;
}