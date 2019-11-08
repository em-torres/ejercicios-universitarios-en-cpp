/* 1.1. Dise�ar un algoritmo que lea e imprima una serie de n�meros distintos de cero.
 		El algoritmo debe terminar conun valor cero que no se debe imprimir. Visualizar el n�mero de valores le�dos.
 */

#include <iostream>

#define TAM_ARR 100

using namespace std;


int main(int argc, char** argv) {
	int numero [TAM_ARR];
	int contador = TAM_ARR;
	
	do {
		cout << "Ingrese un numero por favor: ";
		cin >> numero[contador - 1];
		contador--;
	} while(numero[contador] != 0);
	
	contador = 1;
	
	for (int i=TAM_ARR; numero[i-1] != 0; i--)
	{
		cout << "\n" << contador << ". " << numero[i-1];
		contador++;
	}
	
	cout << "\n\n" << contador - 1 << " numeros leidos.\n";
	
	system("pause");
	return 0;
}

/* Si deseas mas ejercicios como este, comunicate a kdgpro15@gmail.com y por un modico precio lo hacemos */

