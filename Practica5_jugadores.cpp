#include <iostream>
#include <string>
using namespace std;

class Deporte {
	protected:
		string nombre;
		int numeroJugadores;
		string tipoBalon;
		string lugarDeJuego;
		
		public:
			Deporte(string nombre, int jugadores, string balon, string lugar)
			: nombre(nombre), numeroJugadores(jugadores), tipoBalon(balon), lugarDeJuego(lugar) {}
			
			virtual void mostrarInfo() {
				cout << "Nombre del deporte: " << nombre << endl;
				cout << "Numero de jugadores: " << numeroJugadores << endl;
				cout << "Tipo de bal�n: " << tipoBalon << endl;
				cout << "Lugar de juego: " << lugarDeJuego << endl;
			}
};

class DeporteConManos: public Deporte {
	private:
		string tipoDeMovimiento;
		
		public:
			DeporteConManos(string nombre, int jugadores, string balon, string lugar, string movimiento)
			: Deporte(nombre, jugadores, balon, lugar), tipoDeMovimiento(movimiento) {}
			
			void mostrarInfo() override {
				Deporte::mostrarInfo();
				cout << "Tipo de movimiento con las manos: " << tipoDeMovimiento << endl;
			}
};

class DeporteConPies: public Deporte {
	private:
		bool sePermiteManos;
		
		public:
			DeporteConPies(string nombre, int jugadores, string balon, string lugar, bool permiteManos)
			: Deporte(nombre, jugadores, balon, lugar), sePermiteManos(permiteManos) {}
			
			void mostrarInfo() override {
				Deporte::mostrarInfo();
				cout << "�Se permiten las manos?: " << (sePermiteManos? "S�" : "No") << endl;
			}
};

int main() {
	DeporteConManos
	basquet("Baloncesto", 5, "Bal�n de baloncesto", "Cancha", "Lanzar y botar");
	DeporteConPies
	futbol("F�tbol", 11, "Bal�n de f�tbol", "Campo", false);
	
	cout << "--- Deporte con manos ---" << endl;
	basquet.mostrarInfo();
	
	cout << "\n--- Deporte con pies ---" << endl;
	futbol.mostrarInfo();
	return 0;
}
