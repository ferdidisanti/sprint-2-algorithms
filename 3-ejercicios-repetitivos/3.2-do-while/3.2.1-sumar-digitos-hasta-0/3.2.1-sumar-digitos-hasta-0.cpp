#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0; // Acumulador donde guardaremos el total

    // Se ejecuta el bloque AL MENOS UNA VEZ antes de evaluar la condición
    do {
        cout << "Ingresa un número (0 para terminar): ";
        cin >> numero;
        suma += numero; // Sumamos el número ingresado a nuestro total
    } while (numero != 0); // Repetimos MIENTRAS el número ingresado sea distinto de 0

    cout << "La suma total es: " << suma << endl;

    return 0;
}