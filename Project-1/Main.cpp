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
	cout << "3. Matricular estudiante" << "\n" << endl;
	cout << "4. Mostrar cursos" << "\n" << endl;
	cout << "5. Buscar Curso" << "\n" << endl;
	cout << "6. Mostrar estudiantes por curso" << "\n" << endl;
	cout << "7. Mostrar cursos por estudiante" << "\n" << endl;
	cout << "8. Mostrar lista de estudiantes" << "\n" << endl;
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
	void obtDatosEstudiante();
	void agregarEstudiante();
	void matricularEst();
	void mostrarCurso();
	void buscarCurso();
	void mostrarEstXCurso();
	void mostrarCurXEstudiante();
	void mostrarListaEstudiantes();

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
		mostrarEstXCurso();
	}else if (opcion == "7") {
		mostrarCurXEstudiante();
	}else if (opcion == "8") {
		mostrarListaEstudiantes();
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

	cout << "Nombre del curso" << "\n" << endl;
	cin >> nombre;
	cout << "Aula del curso" << "\n" << endl;
	cin >> aula;
	cout << "Horario del curso" << "\n" << endl;
	horario = obtHorario();
	cout << "Dia del curso" << "\n" << endl;
	dia = obtDia();
	gestor.addCurso(nombre, aula, horario, dia);
	cout << "Curso agregado de manera exitosa" << "\n" << endl;
	
}

void obtDatosEstudiante() {
	string nombre;
	cout << "Nombre completo del estudiante" << "\n" << endl;
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
			cout << "Digite el codigo del curso que quiere matricular" << "\n" << endl;
			cin >> codigoCurso;

			cout << gestor.mostrarEstudiantes() << endl;
			cout << "Digite el codigo del estudiante que quiere matricular" << "\n" << endl;
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
		cout << "Digite el codigo del curso para acceder a los estudiantes" << "\n" << endl;
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
		cout << "Digite el codigo del estudiante para acceder a los cursos matriculados" << "\n" << endl;
		cin >> codigoEstudiante;

		cout << gestor.showCurXEstudiante(codigoEstudiante) << "\n" << endl;
	}else {
		cout << "No existen estudiantes" << endl;
	}
}

void mostrarCurso() {
	if (!gestor.verificarSiHayCursos()) {
		cout << gestor.mostrarCursos() << endl;
	}
	else {
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
	}
	else {
		cout << "No existen cursos agregados" << endl;
	}
	
}

string obtenerDatosEstudiante() {

	string nombreEstudiante;
	
	try {
		cout << "Digite el codigo del curso que quiere matricular" << "\n" << endl;
		cin >> nombreEstudiante;

		return nombreEstudiante;
	}catch (std::string *atrapada) {
		 std::cout << "Got " << atrapada << std::endl;
	}
}

void mostrarListaEstudiantes() {
	if (!gestor.verificarSiHayEstudiantes()) {
		cout << gestor.mostrarEstudiantes() << endl;
	}else {
		cout << "No hay estudiantes registrados" << endl;
	
	}
}


