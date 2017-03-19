#include <iostream>
#include <string>
#include "Gestor.h"

using namespace std;
Gestor gestor;

void initGestores() {
	gestor = Gestor::Gestor();
	gestor.addCurso("Patrones","1","Mannana","Lunes");
	gestor.addEstudiante("Juan");
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
	cout << "**    Menu    **" << endl;
	cout << "1. Agregar curso" << endl;
	cout << "2. Agregar estudiante" << endl;
	cout << "3. Matricular estudiante" << endl;
	cout << "4. Mostrar cursos" << endl;
	cout << "5. Buscar Curso" << endl;
	cout << "6. Mostrar estudiantes" << endl;
	cout << "7. Buscar estudiantes" << endl;
	cout << "8. Mostrar estudiantes por curso" << endl;
	cout << "9. Mostrar cursos por estudiante" << endl;
	cout << "0. Salir" << endl;
	cout << "Seleccione una opcion" << endl;
}

void mostarMenuHorario() {
	cout << "**  Menu de horarios **" << endl;
	cout << "1. Mañana" << endl;
	cout << "2. Tarde" << endl;
	cout << "3. Noche" << endl;
	cout << "Seleccione una opcion" << endl;
}

void mostarMenuDia() {
	cout << "**  Menu de dias **" << endl;
	cout << "1. Lunes" << endl;
	cout << "2. Martes" << endl;
	cout << "3. Miercoles" << endl;
	cout << "4. Jueves" << endl;
	cout << "5. Viernes" << endl;
	cout << "6. Sabado" << endl;
	cout << "Seleccione una opcion" << endl;
}

string leerOp() {
	string opcion;
	cin >> opcion;
	return opcion;
}

bool ejecutarMenu(string opcion) {
	void obtDatosCurso();
	void obtDatosEstudiante();
	void agregarEstudiante();
	void matricularEst();
	void mostrarCurso();
	void buscarCurso();
	void mostrarEstudiante();
	void buscarEstudiante();
	void mostrarEstXCurso();
	void mostrarCurXEstudiante();

	if (opcion == "1") {
		obtDatosCurso();
	}else if (opcion == "2") {
		obtDatosEstudiante();
	}else if (opcion == "3") {
		matricularEst();
	}else if (opcion == "4") {
		mostrarCurso();
	}else if (opcion == "5") {
		buscarCurso();
	}else if (opcion == "6") {
		mostrarEstudiante();
	}else if (opcion == "7") {
		buscarEstudiante();
	}else if (opcion == "8") {
		mostrarEstXCurso();
	}else if (opcion == "9") {
		mostrarCurXEstudiante();
	}else if (opcion == "0") {
		return false;
	}else {
		cout << "Opcion invalida" << "\n" << endl;
	}
	return true;
}

void obtDatosCurso() {
	string nombre, aula, horario, dia;

	string obtHorario(), obtDia();

	cout << "Nombre del curso" << endl;
	cin >> nombre;
	cout << "Aula del curso" << endl;
	cin >> aula;
	cout << "Horario del curso" << endl;
	horario = obtHorario();
	cout << "Dia del curso" << endl;
	dia = obtDia();
	gestor.addCurso(nombre, aula, horario, dia);
	cout << "Curso agregado de manera exitosa" << "\n" << endl;
	
}

void obtDatosEstudiante() {
	string nombre;
	cout << "Nombre completo del estudiante" << endl;
	cin >> nombre;
	gestor.addEstudiante(nombre);
	cout << "Estudiante agregado de manera exitosa" << "\n" << endl;
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

void matricularEst() {
	string codigoCurso, codigoEst;
	if (!gestor.verificarSiHayCursos()) {
		if (!gestor.verificarSiHayCursos()) {
			cout << gestor.mostrarCursos() << endl;
			cout << "Digite el codigo del curso que quiere matricular" << endl;
			cin >> codigoCurso;

			cout << gestor.mostrarEstudiantes() << endl;
			cout << "Digite el codigo del estudiante que quiere matricular" << endl;
			cin >> codigoEst;

			cout << gestor.matricular(codigoCurso, codigoEst) << "\n" << endl;
		}else {
			cout << "No existen estudiantes" << endl;
		}
	}else {
		cout << "No existen cursos" << endl;
	}
}

void mostrarEstXCurso() {
	string codigoCurso;
	if (!gestor.verificarSiHayCursos()) {
		cout << gestor.mostrarCursos() << endl;
		cout << "Digite el codigo del curso para acceder a los estudiantes" << endl;
		cin >> codigoCurso;

		cout << gestor.showEstXCurso(codigoCurso) << "\n" << endl;
	}else {
		cout << "No existen cursos" << endl;
	}
}
void mostrarCurXEstudiante() {
	string codigoEstudiante;
	if (!gestor.verificarSiHayCursos()) {
		cout << gestor.mostrarEstudiantes() << endl;
		cout << "Digite el codigo del estudiante para acceder a los cursos matriculados" << endl;
		cin >> codigoEstudiante;

		cout << gestor.showCurXEstudiante(codigoEstudiante) << "\n" << endl;
	}else {
		cout << "No existen estudiantes" << endl;
	}
}

void mostrarCurso() {
	if (!gestor.verificarSiHayCursos()) {
		cout << gestor.mostrarCursos() << endl;
	}else {
		cout << "No existen cursos agregados" << endl;
	}
}
void buscarCurso() {
	string codigo;
	
	if (!gestor.verificarSiHayCursos()) {
		cout << gestor.mostrarCursos() << endl;
		cout << "Ingrese el codigo del curso: " << endl;
		cin >> codigo;
		cout << gestor.buscarInfoCurso(codigo) << endl;
	}else {
		cout << "No existen cursos agregados" << endl;
	}
	
}

void mostrarEstudiante() {
	if (!gestor.verificarSiHayEstudiantes()) {
		cout << gestor.mostrarEstudiantes() << endl;
	}
	else {
		cout << "No existen estudiantes" << endl;
	}
}

void buscarEstudiante() {
	string codigo;

	if (!gestor.verificarSiHayEstudiantes()) {
		cout << gestor.mostrarEstudiantes() << endl;
		cout << "Ingrese el codigo del estudiante: " << endl;
		cin >> codigo;
		cout << gestor.buscarInfoEstudiante(codigo) << endl;
	}else {
		cout << "No existen estudiantes" << endl;
	}
}
