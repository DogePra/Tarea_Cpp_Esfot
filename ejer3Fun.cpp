#include <iostream>
using namespace std;

void llenarDatos(string nombres[], int notas[][4]) {
    nombres[0] = "Ana";
    nombres[1] = "Juan";

    int temp[2][4] = {
        {3, 4, 5, 10},
        {10, 9, 6, 10}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            notas[i][j] = temp[i][j];
        }
    }
}

float calcularPromedio(int fila[]) {
    int suma = 0;
    for (int i = 0; i < 4; i++) {
        suma += fila[i];
    }
    return suma / 4.0;
}

void mostrarPromedios(string nombres[], int notas[][4]) {
    for (int i = 0; i < 2; i++) {
        float promedio = calcularPromedio(notas[i]);
        cout << nombres[i] << " tiene un promedio de: " << promedio << endl;
    }
}

int main() {
    string nombres[2];
    int notas[2][4];

    llenarDatos(nombres, notas);
    mostrarPromedios(nombres, notas);

    return 0;
}
