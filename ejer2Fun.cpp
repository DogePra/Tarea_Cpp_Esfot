#include <iostream>
using namespace std;

void pedirFilasColumnas(int &filas, int &columnas) {
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
}

void llenarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;
    int matriz[10][10];

    pedirFilasColumnas(filas, columnas);
    llenarMatriz(matriz, filas, columnas);
    mostrarMatriz(matriz, filas, columnas);

    return 0;
}
