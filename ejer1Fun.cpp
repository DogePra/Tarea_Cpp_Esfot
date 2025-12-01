#include <iostream>
using namespace std;

void autorPrograma() {
    cout << "Autor: Mateo Andramunio" << endl;
}

void llenarPaises(string paises[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el pais " << i << ": ";
        cin >> paises[i];
    }
}

void registrarPrecios(int precios[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el precio del vuelo " << i << ": ";
        cin >> precios[i];
    }
}

int main() {
    string paises[5];
    int precios[5];

    llenarPaises(paises);
    registrarPrecios(precios);
    autorPrograma();

    return 0;
}
