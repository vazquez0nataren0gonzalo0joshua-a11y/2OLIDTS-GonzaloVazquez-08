#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*int main()
{
	const int capacidad = 5;
	vector<int>elementos(capacidad);
	int cima = -1;
	cout << "Ingrese elemento de la pila (termina con -1)\n";
	int x = 0;
	const int clave = -1;
	while (x != clave) {
		string entrada;
		cin >> entrada;
		try {
			x = stoi(entrada); //convertimos de cadena a entero (string to int)
			//cout << x << endl;
			if (cima < capacidad - 1)
			{
				cima++;
				elementos[cima] = x;
			}
			else {
				cout << "La pila esta llena" << endl;
				break;
			}
		}
		catch (const invalid_argument&) {
			cout << "Entarda no valida\n" << endl;
		}
	}
	if (cima >= 0) {
		cout << "Los elementos en la pila son: \n" << endl;
		while (cima >= 0) {
			x = elementos[cima];
			cima--;
			cout << x << endl;
		}
	}
	else {
		cout << "La pila esta vacia" << endl;
	}


	return 0;
}
*/

const int capacidad = 5;
int ingresar_valores(vector<int>& elementos) {
	int CLAVE = -1;
	int cima = -1;
	int x = 0;
	while (x != CLAVE) {
		string entrada;
		cin >> entrada;
		// scanf("%s", entrada);
		try {
			x = stoi(entrada); // Convertimos de cadena a entero (String to entero)
			// cout << x << endl;
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}
			else {
				cout << "La Pila esta llena" << endl;
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