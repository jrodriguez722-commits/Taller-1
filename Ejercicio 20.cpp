#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Ingrese la nota (entre 0 y 10): ";
    cin >> nota;

    if (nota < 0 || nota > 10) {
        cout << "Nota inválida. Debe estar entre 0 y 10." << endl;
    } else if (nota < 5.0) {
        cout << "Calificación: Suspenso" << endl;
    } else if (nota < 6.5) {
        cout << "Calificación: Aprobado" << endl;
    } else if (nota < 8.5) {
        cout << "Calificación: Notable" << endl;
    } else if (nota < 10.0) {
        cout << "Calificación: Sobresaliente" << endl;
    } else { // nota == 10
        cout << "Calificación: Matrícula de honor" << endl;
    }

    return 0;
}
