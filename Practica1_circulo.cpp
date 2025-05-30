#include <iostream>
#define PI 3.1416

using namespace std;
int main(){
	double radio, area, perimetro;
	char opcion;
	cout << "Ingresa el radio del circulo: ";
	cin >> radio;
	cout << "Escribe 'a' para calcular el area o ´p´ para calcular el perimetro: ";
	cin >> opcion;
	if(opcion == 'a' || opcion == 'A')
	{
		area = PI * radio * radio;
		cout << "El area del circulo es: " << area << endl;
	}
	else if(opcion == 'p' || opcion == 'p'){
		perimetro = 2 * PI * radio;
		cout << "El perimetro del circulo es: " << perimetro << endl;
	} 
	else{
		cout << "Opcion no valida." << endl;
	}
	return 0;
}
