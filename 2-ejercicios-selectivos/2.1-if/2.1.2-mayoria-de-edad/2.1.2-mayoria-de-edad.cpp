#include <iostream>

using namespace std;

int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Evaluamos la condición directamente
    if (edad >= 18) {
        cout << "Mayoría de edad" << endl;
    }

    return 0;
}