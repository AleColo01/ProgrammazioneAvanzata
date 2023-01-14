/*
 * Acqua.h
 *
 *  Created on: 11 dic 2022
 *      Author: 39345
 */

#ifndef ACQUA_H_
#define ACQUA_H_

#include <iostream>
#include "Prodotto.h"
#include "Tipo.h"
using namespace std;

class Acqua : private Prodotto{
	private:
		const int ID = 999;
	public:
		Tipo tipo; //enumerativo

		Acqua(int t){
			nome = "Acqua";
			costo = getCosto(); //usa il metodo di Prodotto
			if(t == 0)
				tipo = Frizzante;
			else
				tipo = Naturale;
		}

		//ritorna 0, perchè non può essere inserito a menu
		string check(){
			return "0";
		}

};



#endif /* ACQUA_H_ */
