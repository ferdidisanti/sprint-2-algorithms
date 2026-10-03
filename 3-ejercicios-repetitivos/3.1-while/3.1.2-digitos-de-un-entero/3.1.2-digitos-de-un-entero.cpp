#include <iostream>
using namespace std;

int main() {
    long long numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Convertir a positivo si es negativo
    long long temp = abs(numero);
    int contador = 0;

    // Caso especial para el 0
    if (temp == 0) {
        contador = 1;
    } else {
        // Bucle while para contar los dígitos
        while (temp > 0) {
            temp /= 10; // Elimina el último dígito
            contador++; // Incrementa el contador de dígitos
        }
    }

    cout << "El numero tiene " << contador << " digito(s)." << endl;

    return 0;
}