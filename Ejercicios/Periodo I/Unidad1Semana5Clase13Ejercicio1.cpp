#include <iostream>
using namespace std;

int main(){
	string dia;
	cout << "Ingrese un dia de la semana: ";
	cin >> dia;
	if (dia == "sabado" or dia =="Sabado" or dia =="SABADO"){
		cout << "Feliz fin de semana" << endl;
	} else if (dia == "domingo" or dia =="Domingo" or dia =="DOMINGO"){
		cout << "Feliz descanso";
	} else {
		cout "No es un dia valido";
	}
}
