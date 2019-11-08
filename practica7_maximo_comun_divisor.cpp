/* Escribir un algoritmo para determinar el máximo común divisor de dos números enteros (MCD) por el algoritmo de Euclides:
 *   • Dividir el mayor de los dos enteros por el más pequeño.
 *   • A continuación, dividir el divisor por el resto.
 *   • Continuar el proceso de dividir el último divisor por el último resto hasta que la división sea exacta.
 *   • El último divisor es el MCD
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

