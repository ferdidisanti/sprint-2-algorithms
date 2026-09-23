#include <iostream>

using namespace std;

int main() {
    char caracter;
    int contadorVocales = 0;

    cout << "Ingresa caracteres uno por uno (termina con '.'):" << endl;

    do {
        cin >> caracter;

        // Convertimos a minúscula manualmente o evaluamos las opciones
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            contadorVocales++;
        }
    } while (caracter != '.'); // Continúa pidiendo hasta que se lea el punto

    cout << "Cantidad de vocales ingresadas: " << contadorVocales << endl;

    return 0;
}