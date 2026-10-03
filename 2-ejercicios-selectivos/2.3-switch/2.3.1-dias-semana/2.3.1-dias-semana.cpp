#include <iostream>

using namespace std;

int main() {
    int dia;
    cout << "Ingresa un número del 1 al 7: ";
    cin >> dia;

    // Evaluamos el valor exacto de la variable 'dia'
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break; // El 'break' evita que ejecute los casos de abajo
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            // Se ejecuta si el usuario ingresa una opción fuera del 1 al 7
            cout << "Número inválido. Debe ser de 1 a 7." << endl;
            break;
    }

    return 0;
}