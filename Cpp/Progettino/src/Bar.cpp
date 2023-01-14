//============================================================================
// Name        : Progettino.cpp
// Author      : Alessandro Colombo 1066001
// Description : Progettino in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Ingrediente.h"
using namespace std;
#include "Prodotto.h"
#include "Tipo.h"
#include "Panino.h"
#include "Acqua.h"
#include "Birra.h"
#include "Menu.h"
#include <math.h>


int main() {
	// CREO DIVERSI INGREDIENTI
	Ingrediente<int> i1 = Ingrediente<int>(1,"pane", 0.15);
	Ingrediente<int> i2 = Ingrediente<int>(2,"prosciutto", 0.6);
	Ingrediente<int> i3 = Ingrediente<int>(3,"insalata", 0.2);
	Ingrediente<int> i4 = Ingrediente<int>(4,"pomodoro", 0.3);
	Ingrediente<int> i5 = Ingrediente<int>(5,"cotoletta", 1.1);
	Ingrediente<int> i6 = Ingrediente<int>(6,"salsa", 0.1);

	// STAMPO GLI INGREDIENTI
	cout << i1.toString() << endl;
	cout << i2.toString() << endl;
	cout << i3.toString() << endl;
	cout << i4.toString() << endl;
	cout << i5.toString() << endl;
	cout << i6.toString() << endl;

	cout << endl;

	// CREO DUE BIRRE
	Birra b1 = Birra();
	Birra b2 = Birra();

	// OOPS... CANCELLO LA BIRRA DI TROPPO, CHE DIVENTA NULLA (ID = 0)
	delete &b2;
	cout << b2.toString() << endl;

	cout << endl;

	//CREO UN MENU
	Menu menu = Menu();

	//AGGIUNGIAMO LE BIRRE...
	menu.nuovoProdotto(&b2);
	menu.nuovoProdotto(&b1);

	//...MA QUELLA NULLA NON è STATA INSERITA!
	cout << endl;
	menu.stampa();
	cout << "size: " << menu.size() << endl;
	cout << endl;

	//UN ACQUA PER OGNI TIPO
	Acqua aF = Acqua(0);
	cout << aF.tipo << endl;
	Acqua aN = Acqua(1);
	cout << aN.tipo << endl;

	cout << endl;

	//CREIAMO TANTI PANINI, MA P3 e P4 SONO UGUALI
	Panino<int> p1 = {i1, i2, i4, i3}; //initializer_list
	Panino<int> p2 = {i1, i5, i6};
	Panino<int> p3 = {i1, i5};
	Panino<int> p4 = {i1, i5};
	Panino<int> p5 = {i1, i5, i3};

	cout << endl;

	//AGGIUNGIAMO I PANINI
	menu.nuovoProdotto(&p1);
	menu.nuovoProdotto(&p2);
	menu.nuovoProdotto(&p3);
	menu.nuovoProdotto(&p4);
	menu.nuovoProdotto(&p5);

	cout << endl;

	//P4 è STATO CANCELLATO, P3 NO!
	cout << p3.toString() << endl;
	cout << p4.toString() << endl;

	//MENU AL COMPLETO
	cout << endl;
	menu.stampa();
	cout << "size: " << menu.size()<< endl;

	//CANCELLIAMO P2, AGGIUNGIAMO UN INGREDIENTE A P1
	delete &p2;
	p1.append({i6});

	//MENU A SEGUITO DELLE MODIFICHE, ANCHE LA DIMENSIONE è GIUSTA!
	cout << endl;
	menu.stampa();
	cout << "size: " << menu.size()<< endl ;

}
