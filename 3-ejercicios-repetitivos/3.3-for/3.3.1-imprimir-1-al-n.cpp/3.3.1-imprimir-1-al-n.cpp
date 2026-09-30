#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el valor de N: ";
    cin >> n;

    if (n >= 1) {
        // Contar hacia adelante: 1, 2, 3, ..., N
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    } else {
        // Contar hacia atrás: 1, 0, -1, ..., N
        for (int i = 1; i >= n; i--) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}