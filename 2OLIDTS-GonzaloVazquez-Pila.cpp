#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	const int capacidad = 5;
	vector<int>elementos(capacidad);
	int cima = -1;
	cout << "Ingrese el elemento de la pila (-1 termina el codigo )\n" << endl;
	int x = 0;
	const int CLAVE = -1;
	while (x != CLAVE) {
		string entrada;
		cin >> entrada;
		try {
			x = stoi(entrada); // Convertimos de cadena a entero
			//cout <<x x << endl;
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}
			else
			{
				cout << "La pila esta llena " << endl;
				break;
			}
		}
		catch (const invalid_argument&) {
			cout << "Entrada no valida\n" << endl;

		}
	}
	if (cima >= 0)
	{
		cout << "Los elementos en la pila son: \n" << endl;
		while (cima >= 0)
		{
			x = elementos[cima];
			cima--;
			cout << x << endl;
		}
	}
	else
	{
		cout << "La pila esta vacia \n" << endl;

		return 0;
	}
}