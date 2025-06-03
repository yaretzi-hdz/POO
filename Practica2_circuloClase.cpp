//Selena Yaretzi Hernández López
//Calcula el radio con clase
#include <iostream>
#define PI 3.1416

using namespace std;

//Definición de la clase Circulo
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

//Función principal
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
		cout << "Opcion no válida." << endl;
	}
	return 0;
}
