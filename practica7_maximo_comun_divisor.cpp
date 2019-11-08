/* Escribir un algoritmo para determinar el m�ximo com�n divisor de dos n�meros enteros (MCD) por el algoritmo de Euclides:
 *   � Dividir el mayor de los dos enteros por el m�s peque�o.
 *   � A continuaci�n, dividir el divisor por el resto.
 *   � Continuar el proceso de dividir el �ltimo divisor por el �ltimo resto hasta que la divisi�n sea exacta.
 *   � El �ltimo divisor es el MCD
 */

#include <iostream>
#include <algorithm>

using namespace std;

 
int main(int argc, char** argv) {
    int num1, num2, a, b, res;

	cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: "; 
    cin >> num2;

    a = max(num1,num2);
    b = min(num1,num2);

    do {
        res = b;
        b = a%b;
        a = res;
    } while (b!=0);

    cout << "\nEl Maximo Comun Divisor entre " << num1 << " y " << num2 << " es: " << res << "\n";
    
    system("pause");
    return 0;
}

/* Si deseas mas ejercicios como este, comunicate a kdgpro15@gmail.com y por un modico precio lo hacemos */

