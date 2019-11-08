/* 1.4 Diseñar un algoritmo para calcular la velocidad (en m/s)de los corredores de la carrera de 1,500 metros.
 *	   La entrada (tiempo del corredor) consistirá en parejas de números (minutos, segundos); por cada corredor,
 *     el algoritmo debe imprimir el tiempo en minutos y se gundos así como la velocidad media.
 *     Ejemplo de entrada de datos: (3.53) (3.40) (3.46) (3.52) (4.0) (0.0);
 *     el último parde datos se utilizará como fin de entrada de datos.
 */

#include <iostream>

#define DISTANCIA 1500
#define CANT_CORRED 100

using namespace std;

int tiempo_en_segundos(float tiempo);


int tiempo_en_segundos(float tiempo)
{
	int tempo = tiempo;
	
	return (tempo * 60) + ((tiempo - tempo) * 100);
}

int main(int argc, char** argv) {
	float tiempo_corred [CANT_CORRED];
	float vel_corred [CANT_CORRED];
	int contador = CANT_CORRED;
	int corred_segs [CANT_CORRED];
	
	do {
		contador--;
		
		cout << "Ingrese el tiempo del corredor: ";
		cin >> tiempo_corred[contador];
		
		if (tiempo_corred[contador] != 0.0) {
			corred_segs[contador] = tiempo_en_segundos(tiempo_corred[contador]);
			vel_corred[contador] = DISTANCIA / corred_segs[contador];
			cout << "La velocidad media es de: " << vel_corred[contador] << " m/s" << endl << endl;
		}	
	} while (tiempo_corred[contador] != 0.0);
	
	system("pause");
	return 0;
}

/* Si deseas mas ejercicios como este, comunicate a kdgpro15@gmail.com y por un modico precio lo hacemos */

