#include <iostream>
using namespace std;

int main() {
    // Declaramos variables tipo float para admitir valores decimales
    float celsius, fahrenheit;

    // Solicitamos la temperatura en grados Celsius al usuario
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Aplicamos la fórmula matemática de conversión: (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Mostramos el resultado
    cout << "Resultado: " << fahrenheit << " °F" << endl;

    return 0;
}