#include <iostream>
using namespace std;

void ingresarDatos(string productos[], int inicial[], int vendido[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del producto " << i << ": ";
        cin >> productos[i];

        cout << "Ingrese el stock inicial de " << productos[i] << ": ";
        cin >> inicial[i];

        cout << "Ingrese el stock vendido de " << productos[i] << ": ";
        cin >> vendido[i];
    }
}

void calcularStockFinal(int inicial[], int vendido[], int final[], int n) {
    for (int i = 0; i < n; i++) {
        if (vendido[i] > inicial[i]) {
            cout << "Error: vendido mayor que stock inicial en el producto " << i << endl;
            final[i] = 0;
        } else {
            final[i] = inicial[i] - vendido[i];
        }
    }
}

void mostrarResultados(string productos[], int final[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Producto: " << productos[i]
             << " - Stock Final: " << final[i] << endl;
    }
}

int main() {
    const int n = 3;
    string productos[n];
    int stockInicial[n];
    int stockVendido[n];
    int stockFinal[n];

    ingresarDatos(productos, stockInicial, stockVendido, n);
    calcularStockFinal(stockInicial, stockVendido, stockFinal, n);
    mostrarResultados(productos, stockFinal, n);

    return 0;
}
