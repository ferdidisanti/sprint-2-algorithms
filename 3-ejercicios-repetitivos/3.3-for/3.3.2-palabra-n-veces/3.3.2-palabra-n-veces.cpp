#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    int n;

    cout << "Ingresa una palabra: ";
    cin >> palabra;
    cout << "Ingresa cuántas veces repetirla (N): ";
    cin >> n;

    // Se repite N veces desde i = 0 hasta i < n
    for (int i = 0; i < n; i++) {
        cout << palabra << " ";
    }
    cout << endl;

    return 0;
}