// ListaSimpleC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <string>
#include <iostream>
using namespace  std;
class Alumno {
public:
	int carnet;
	string nombre;
	Alumno* siguiente;
	Alumno(int carnet_, string nombre_) : nombre(nombre_), carnet(carnet_), siguiente(0) {}
};



class ListaAlumno {
public:
	Alumno* primero = 0;

	void insertar(int carnet, string nombre) {
		if (primero == 0) {
			Alumno* nuevo = new Alumno(carnet, nombre);
			primero = nuevo;
		}
		else {
			Alumno* nuevo = new Alumno(carnet, nombre);
			nuevo->siguiente = primero;
			primero = nuevo;
		}
	}

	void eliminar(Alumno* n) {
		Alumno* tmp = primero;
		while (primero->siguiente != 0)
		{
			if (tmp == n) {
				tmp->siguiente = 0;
				break;
			}
			else {
				tmp = tmp->siguiente;
			}
		}
	}

	Alumno* buscar(int n) {
		Alumno* tmp = primero;
		while (primero->siguiente != 0)
		{
			if (tmp->carnet == n) {
				return tmp;
			}
		}
		return 0;
	}
};

int main()
{
    std::cout << "Hello World!\n";
	ListaAlumno *lista = new ListaAlumno();
	lista->insertar(1, "Luis");
	lista->insertar(2, "Pedro");
	lista->insertar(3, "Juan");
	Alumno* al = lista->buscar(3);
	std::cout << "nombre: "+ al->nombre  ;
	std::cout << "\n";
	std::cout << "carnet: " + al->carnet ;

}








// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
