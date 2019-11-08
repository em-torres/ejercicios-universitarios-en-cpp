/* 1.5. Escribir un algoritmo que encuentre el salario semanal de un trabajador, dada la tarifa horaria y el número de horas trabajadas diariamente.
 *
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	float sal_sem, sal_sem_dom;
	float tarifa = 0.00;
	int horas = 0;
		
	cout << "Escriba la tarifa horaria: ";
	cin >> tarifa;
	cout << "Escriba las horas trabajadas diariamente: ";
	cin >> horas;
	
	sal_sem = tarifa * (horas * 7);
	sal_sem_dom = tarifa * (horas * 5.5);
	
	cout << "\nEl salario semanal del empleado es: " << sal_sem << "\n";
	cout << "Segun la jornada laboral Dominicana (Libre los Domingos y 5 horas de trabajo los sabados): " << sal_sem_dom << "\n";
		
	system("pause");
	return 0;
}

/* Si deseas mas ejercicios como este, comunicate a kdgpro15@gmail.com y por un modico precio lo hacemos */

