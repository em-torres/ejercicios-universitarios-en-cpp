/* 1.3 Escribir un algoritmo que lea cuatro números y a continuación imprima el mayor de los cuatro
 *
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	int numero[5];
	
	cout << "Ingrese los 4 digitos para comparar el mayor:\n";
	
	for(int i=0; i < 4; i++) {
		cout << "Digito " << i+1 << ": ";
		cin >> numero[i];
		
		if (i > 0) {
			if (numero[0] < numero[i]) {
				numero[4] = numero[0];
				numero[0] = numero[i];
				numero[i] = numero[4];
			}
		}
    }
    
    cout << "\nEl Mayor es: " << numero[0] << "\n";
	
	system("pause");
	return 0;
}

/* Si deseas mas ejercicios como este, comunicate a kdgpro15@gmail.com y por un modico precio lo hacemos */

