// ListaDobleC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Nodo {
public:
	char dato;
	Nodo* siguiente;
	Nodo* anterior;
	Nodo(char dato_) : dato(dato_), siguiente(0), anterior(0) {};
};

class ListaDoble {
public:  
	Nodo* primero = 0;

	void insertarPrimero(char c) {
		if (primero == 0) {
			Nodo* nuevo = new Nodo(c);
			primero = nuevo;
		}
		else {
			Nodo* nuevo = new Nodo(c);
			Nodo* aux = primero;
			nuevo->siguiente = aux;
			aux->anterior = nuevo;
			primero = nuevo;
		}
	}

	void eliminarUltimo() {
		Nodo* aux = primero;
		Nodo* tmp = 0;
		while (aux != 0)
		{
			if (aux->siguiente == 0) {
				tmp= aux->anterior;
				tmp->siguiente = 0;
				aux = 0;
			}
			else {
				aux = aux->siguiente;
			}
		}
	}

	Nodo* buscar(string s) {
		char c = s[0];
		Nodo* aux = primero;
		while (aux != 0)
		{
			if (aux->dato == c) {
				return aux;
			}
			aux = aux->siguiente;
		}
		return 0;
	}

	void imprimir() {		
		Nodo* aux = primero;
		while (aux != 0)
		{
			std::cout << "\n dato : \n";
			std::cout <<  aux->dato;
			aux = aux->siguiente;
		}
	}
};

int main()
{

	std::cout << "Hello World!\n";
	ListaDoble* lista = new ListaDoble();
	lista->insertarPrimero('a');
	lista->insertarPrimero('b');
	lista->insertarPrimero('c');
	lista->imprimir();
	Nodo* c = lista->buscar("arbol");
	std::cout << "\n encontrado : \n";
    std::cout <<  c->dato ;
	lista->eliminarUltimo();
	lista->imprimir();
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
