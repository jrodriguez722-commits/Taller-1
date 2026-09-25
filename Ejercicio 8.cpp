#include <iostream>

using namespace std;

int main() {
    int total_segundos;

    // Leer el total de segundos
    cout << "Ingresa la cantidad de segundos: ";
    cin >> total_segundos;

    // Calcular minutos y segundos restantes
    int minutos = total_segundos / 60;
    int segundos_restantes = total_segundos % 60;

    // Mostrar resultado
    cout << total_segundos << " segundos equivalen a: " 
         << minutos << " minutos y " 
         << segundos_restantes << " segundos." << endl;

    return 0;
}
