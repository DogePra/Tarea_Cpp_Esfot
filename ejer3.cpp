#include <iostream>
using namespace std;

int main() {
    string equipos[4];
    int puntajes[4];

    for (int i = 0; i < 4; i++) {
        cout << "Ingrese el nombre del equipo " << i << ": ";
        cin >> equipos[i];
        cout << "Ingrese el puntaje de " << equipos[i] << ": ";
        cin >> puntajes[i];
    }

    int mayor = puntajes[0];
    int pos = 0;

    for (int i = 1; i < 4; i++) {
        if (puntajes[i] > mayor) {
            mayor = puntajes[i];
            pos = i;
        }
    }

    cout << "El equipo con mayor puntaje es: " << equipos[pos] 
         << " con " << mayor << " puntos." << endl;

    return 0;
}
