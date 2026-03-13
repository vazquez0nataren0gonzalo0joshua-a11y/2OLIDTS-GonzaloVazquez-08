#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

const int capacidad = 5;

int ingresar_valores(vector<int>& elementos) {
    int CLAVE = -1;
    int cima = -1;
    int x = 0;

    while (x != CLAVE) {
        string entrada;
        cin >> entrada;
        try {
            x = stoi(entrada); 
            if (cima < capacidad - 1) {
                cima++;
                elementos[cima] = x;
            }
            else {
                cout << "La pila esta llena" << endl;
                break;
            }
        }
        catch (const invalid_argument&) {
            cout << "Entrada no valida\n" << endl;
        }
    }
    return cima;
}

void imprimir_valores(vector<int>& elementos, int cima) {
    int xx = 0;
    if (cima >= 0) {
        cout << "Los elementos en la pila son : \n" << endl;
        while (cima >= 0) {
            xx = elementos[cima];

            cout << xx << endl;
            cima--;
        }
    }
    else {
        cout << "La pila esta vacia \n" << endl;
    }
}

int main()
{
    vector<int>elementos(capacidad);

    cout << "Ingrese el elemento de la pila (-1 termina el codigo)\n" << endl;

    int cima = ingresar_valores(elementos);
    cout << cima << endl;

    imprimir_valores(elementos, cima);

    return 0;
}