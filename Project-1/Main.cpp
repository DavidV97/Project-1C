#include <iostream>
#include <string>
#include "Gestor.h"

using namespace std;
Gestor gestor;

  void initGestores() {
	  gestor = Gestor::Gestor();
  }
int main(int argc, char** argv) {
	
	initGestores();
	void mostarMenu();
	string leerOp();
	bool ejecutarMenu(string opcion);

	string opcion;
	bool noSalir = true;

	while (noSalir) {
		mostarMenu();
		opcion = leerOp();
		noSalir = ejecutarMenu(opcion);
	}
	
	return 0;
}

void mostarMenu() {
	cout << "**    Menu    **" << "\n" << endl;
	cout << "1. Agregar curso" << "\n" << endl;
	cout << "2. Agregar estudiante" << "\n" << endl;
	cout << "0. Salir" << "\n" << endl;
	cout << "Seleccione una opcion" << "\n" << endl;
}

void mostarMenuHorario() {
	cout << "**  Menu de horarios **" << "\n" << endl;
	cout << "1. Mañana" << "\n" << endl;
	cout << "2. Tarde" << "\n" << endl;
	cout << "3. Noche" << "\n" << endl;
	cout << "Seleccione una opcion" << "\n" << endl;
}

void mostarMenuDia() {
	cout << "**  Menu de dias **" << "\n" << endl;
	cout << "1. Lunes" << "\n" << endl;
	cout << "2. Martes" << "\n" << endl;
	cout << "3. Miercoles" << "\n" << endl;
	cout << "4. Jueves" << "\n" << endl;
	cout << "5. Viernes" << "\n" << endl;
	cout << "6. Sabado" << "\n" << endl;
	cout << "Seleccione una opcion" << "\n" << endl;
}

string leerOp() {
	string opcion;
	cin >> opcion;
	return opcion;
}

bool ejecutarMenu(string opcion) {
	void obtDatosCurso();

	if (opcion == "1") {
		obtDatosCurso();
	}
	else if (opcion == "0") {
		return false;
	}
	else {
		cout << "Opcion invalida" << "\n" << endl;
	}
	return true;
}

void obtDatosCurso() {
	string codigo, nombre, aula, horario, dia;

	string obtHorario(), obtDia();

	cout << "Codigo del curso" << "\n" << endl;
	cin >> codigo;
	cout << "Nombre del curso" << "\n" << endl;
	cin >> nombre;
	cout << "Aula del curso" << "\n" << endl;
	cin >> aula;
	cout << "Horario del curso" << "\n" << endl;
	horario = obtHorario();
	cout << "Dia del curso" << "\n" << endl;
	dia = obtDia();
	gestor.addCurso(codigo, nombre, aula, horario, dia);
	gestor.addCurso(codigo, nombre, aula, horario, dia);
	string resul = gestor.mostrarCursos();
	cout << resul << endl;
	cout << "Curso agregado de manera exitosa" << "\n" << endl;
	
}

string obtHorario() {
	string opcion, horario;
	void mostarMenuHorario();

	while (true) {

		mostarMenuHorario();
		opcion = leerOp();

		if (opcion == "1") {
			horario = "mañana";
			break;
		}
		else if (opcion == "2") {
			horario = "tarde";
			break;
		}
		else if (opcion == "3") {
			horario = "noche";
			break;
		}
		else {
			cout << "Opcion invalida" << "\n" << endl;
		}
	}

	return horario;
}

string obtDia() {
	string opcion, dia;
	void mostrarMenuDia();

	while (true) {

		mostarMenuDia();
		opcion = leerOp();

		if (opcion == "1") {
			dia = "lunes";
			break;
		}
		else if (opcion == "2") {
			dia = "martes";
			break;
		}
		else if (opcion == "3") {
			dia = "miercoles";
			break;
		}
		else if (opcion == "4") {
			dia = "jueves";
			break;
		}
		else if (opcion == "5") {
			dia = "viernes";
			break;
		}
		else if (opcion == "6") {
			dia = "sabado";
			break;
		}
		else {
			cout << "Opcion invalida" << "\n" << endl;
		}
	}

	return dia;
}
