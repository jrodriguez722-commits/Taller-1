#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;

    cout << "Ingresa el primer número: ";
    cin >> n1;
    cout << "Ingresa el segundo número: ";
    cin >> n2;
    cout << "Ingresa el tercer número: ";
    cin >> n3;

    double mayor = n1;

    if (n2 > mayor) {
        mayor = n2;
    }
    if (n3 > mayor) {
        mayor = n3;
    }

    cout << "El número mayor es: " << mayor << endl;

    return 0;
}
