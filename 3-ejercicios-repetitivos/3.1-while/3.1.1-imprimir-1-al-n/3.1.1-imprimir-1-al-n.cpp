#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    // Inicializamos una variable de control en 1
    int i = 1;

    // El bucle while se ejecutará mientras la variable de control sea menor o igual a N
    while (i <= N) {
        cout << i << " ";
        i++; // Incrementamos el contador para evitar un bucle infinito
    }
    cout << endl;

    return 0;
}