#include <iostream>
#define PI 3.1416

using namespace std;

//Definici�n de la clase Circulo
class Circulo{
	private:
		double radio;
		
		public:
			Circulo(double r){
				radio = r;
			}
			double calcularArea(){
				return PI * radio * radio;
			}
			double calcularPerimetro(){
				return 2 * PI * radio;
			}
			double getRadio(){
				return radio;
			}
};

//Funci�n principal
int main(){
	double radio;
	char opcion;
	
	cout << "Ingresa el radio del circulo: ";
	cin >> radio;
	
	//Crear objeto de la clase circulo
	Circulo miCirculo(radio);
	cout << "Escribe 'a' para calcular el area o 'p' para calcular el perimetro: ";
	cin >> opcion;
	
	if(opcion == 'a' || opcion == 'A')
	{
		cout << "El area del circulo es: " << miCirculo.calcularArea() << endl;
	}
	else{
		cout << "Opcion no v�lida." << endl;
	}
	return 0;
}
