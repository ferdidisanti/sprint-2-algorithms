#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    int i = 1;

    if (N >= 1) {
        // Bucle normal para positivos (cuenta hacia adelante)
        while (i <= N) {
            cout << i << " ";
            i++;
        }
    } else {
        // Bucle para negativos y cero (cuenta hacia atrás)
        while (i >= N) {
            cout << i << " ";
            i--; // Decrementamos i en lugar de sumar
        }
    }
    
    cout << endl;
    return 0;
}