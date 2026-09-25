#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Leer los tres números
    cout << "Ingresa tres números enteros separados por espacio: ";
    cin >> a >> b >> c;

    // Verificar el orden
    if ((a <= b && b <= c) || (a >= b && b >= c)) {
        cout << "Los números están en orden numérico." << endl;
    } else {
        cout << "Los números NO están en orden numérico." << endl;
    }

    return 0;
}
