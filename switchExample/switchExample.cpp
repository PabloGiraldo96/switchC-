// switchExample.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;




class Ciclista {

public: 
	int id;
	string nombre;
	int edad;
	float tiempo;

	Ciclista(int id, const std::string& nombre, int edad, float tiempo)
	: id(id), nombre(nombre), edad(edad), tiempo(tiempo) {}
};



int main(){
	cout << "**** Lista de ciclistas ***** \n";
	cout << "1. Registrar un ciclista \n";
	cout << "2. Mirar todos los ciclistas \n";
	cout << "3. Corregir el tiempo del ciclista \n";
	cout << "4. Eliminar a un ciclista \n";
	cout << "0. Salirse del menu \n";

	int opcion_numero;

	int lista_ciclistas[10];

	while (true)
	{

	cout << "Por favor ingrese un numero \n";
	cin >> opcion_numero;

	switch (opcion_numero){
	case 1:
		cout << "Esta opcion registra un ciclista \n";
		break;
	case 2:
		cout << "Esta opcion muestra la lista de ciclistas \n";
		break;
	case 3:
		cout << "Esta opcion corrige el tiempo de un ciclista \n";
		break;
	case 4:
		cout << "Esta opcion elimina un ciclista \n";
		break;
	default:
		cout << "Opcion invalida \n";
		break;
		continue;

			}
		// Tengo que empezar con el tema de objetos ya que me indican debo crear una clase para poder instanciar un objeto, por lo que deberé leer mas

	if (opcion_numero == 0){
		break;
			}	
		}
	}




