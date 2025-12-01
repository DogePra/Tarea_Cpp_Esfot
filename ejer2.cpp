#include <iostream>
using namespace std;

int main() {
    int tam;
    cout << "Ingrese el tamaño del vector de materias: ";
    cin >> tam;

    string materias[tam];

    if (tam >= 5) {
        materias[0] = "ProgramacionObj";
        materias[1] = "RedesComp";
        materias[2] = "Sistemas Operativos";
        materias[3] = "DiseñoInterfaces";
        materias[4] = "Algoritmos Y Estructura";
    }

    for (int i = 0; i < tam; i++) {
        cout << materias[i] << endl;
    }

    return 0;
}
