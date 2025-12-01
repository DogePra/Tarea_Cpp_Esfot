#include <iostream>
using namespace std;

int totalVentas(int ventas[], int dia) {
    if (dia == 0)
        return ventas[0];
    return ventas[dia] + totalVentas(ventas, dia - 1);
}

int main() {
    int n;
    cout << "Ingrese la cantidad de dias: ";
    cin >> n;

    int ventas[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese ventas del dia " << i + 1 << ": ";
        cin >> ventas[i];
    }

    int total = totalVentas(ventas, n - 1);
    cout << "Total de ventas: " << total << endl;

    return 0;
}
