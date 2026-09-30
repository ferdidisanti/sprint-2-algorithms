#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada;
    int contadorVocales = 0;
    bool seEncontroPunto = false;

    cout << "Ingresa palabras o texto (termina con '.'):" << endl;

    do {
        cin >> entrada;

        // 1. Si la entrada contiene un punto al final o es un punto solo
        if (!entrada.empty() && entrada.back() == '.') {
            seEncontroPunto = true;
            entrada.pop_back(); // Quitamos el '.' para que no interfiera
        }

        // 2. Contamos las vocales de la palabra actual
        for (size_t i = 0; i < entrada.length(); i++) {
            unsigned char c = entrada[i];

            // Vocales sin acento
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                contadorVocales++;
            }
            // Vocales con acento (UTF-8)
            else if (c == 0xC3 && i + 1 < entrada.length()) {
                unsigned char siguiente = entrada[i + 1];

                if (siguiente == 0xA1 || siguiente == 0xA9 || siguiente == 0xAD || siguiente == 0xB3 || siguiente == 0xBA || // á, é, í, ó, ú
                    siguiente == 0x81 || siguiente == 0x89 || siguiente == 0x8D || siguiente == 0x93 || siguiente == 0x9A) {  // Á, É, Í, Ó, Ú
                    contadorVocales++;
                    i++; // Saltamos el segundo byte
                }
            }
        }

    } while (!seEncontroPunto); // El ciclo se repite MIENTRAS NO se haya encontrado un punto

    cout << "Cantidad de vocales ingresadas: " << contadorVocales << endl;

    return 0;
}