#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool esPotenciaDeDos(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int numero;

    cout << "Ingresa un número entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else if (numero >= 30) {
        cout << "El número es mayor o igual a 30." << endl;
    } else if (numero == 0) {
        cout << "cero" << endl;
    } else if (numero == 1) {
        cout << "unidad" << endl;
    } else {
        if (esPotenciaDeDos(numero)) {
            cout << "El número es una potencia de 2." << endl;
        } else if (esPrimo(numero)) {
            cout << "El número es primo." << endl;
        } else {
            cout << "El número es compuesto." << endl;
        }
    }

    return 0;
}
