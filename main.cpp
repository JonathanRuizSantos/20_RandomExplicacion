#include <iostream>

/* EXPLICACION DE METODO RANDOM*/
using namespace std;
int main(int argc, char** argv) {
	
	int random;
	
	// Generar 100 numeros aleatorios sin delimitar un rango
	cout<<"******** Numeros aleatorios sin delimitar un rango *******"<<endl;
	for(int i = 1; i <= 100; i++ ){
		random = rand();
		cout<<i<<".- "<<random<<endl;
	}
	
	// Maximo valor que se genera en el codigo anterior
	cout<<"El rango de generacion de numeros aleatorios es de 0 a "<<RAND_MAX<<endl;
	
	// Acotando los valores en rand()
	//Limite superior
	for(int i = 1; i<= 100;i++){
		random = rand() % 101;
		cout<<i<<".- "<<random<<endl;
	}
	
	// Limite inferior
	for(int i = 1; i<= 100;i++){
		random = 10 + rand();
		cout<<i<<".- "<<random<<endl;
	}
	// Maximo valor que se genera en el codigo anterior
	cout<<"El rango de generacion de numeros aleatorios es de 0 a "<<RAND_MAX<<endl;
	
	// Limite superior e inferior: Formula --> valor = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
	for(int i = 1; i<= 100;i++){
		random = 70 + rand() % 31;
		cout<<i<<".- "<<random<<endl;
	}
	
	return 0;
}