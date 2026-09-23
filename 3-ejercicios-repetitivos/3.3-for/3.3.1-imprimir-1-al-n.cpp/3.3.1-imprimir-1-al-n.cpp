#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el valor de N: ";
    cin >> n;

    // Sintaxis del for: (inicialización; condición de parada; incremento)
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}