#include <iostream>

using namespace std;

int main() {
    char c;
    int contadorVocales = 0;

    cout << "Ingresa caracteres (termina con '.'): ";

    do {
        cin >> c; // Lee el siguiente carácter
        
        // Verifica vocales minúsculas Y mayúsculas de forma explícita
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contadorVocales++;
        }

    } while (c != '.'); // Continúa hasta leer el punto '.'

    cout << "Total de vocales: " << contadorVocales << endl;

    return 0;
}