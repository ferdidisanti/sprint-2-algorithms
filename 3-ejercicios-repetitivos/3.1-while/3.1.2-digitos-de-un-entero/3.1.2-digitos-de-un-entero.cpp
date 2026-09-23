#include <iostream>

using namespace std;

int main() {
    long long numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Caso especial: si el número ingresado es 0, tiene 1 dígito
    if (numero == 0) {
        cout << "El número tiene 1 dígito." << endl;
        return 0;
    }

    // Convertimos a positivo si nos dan un negativo para evitar fallos
    long long temp = (numero < 0) ? -numero : numero;
    int contador = 0;

    // MIENTRAS temp sea mayor a 0, le quitamos el último dígito dividiendo entre 10
    while (temp > 0) {
        temp = temp / 10; // Ejemplo: 12045 / 10 = 1204
        contador++;       // Sumamos 1 al número de dígitos encontrados
    }

    cout << "El número tiene " << contador << " dígitos." << endl;

    return 0;
}