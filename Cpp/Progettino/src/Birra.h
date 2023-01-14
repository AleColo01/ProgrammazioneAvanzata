/*
 * Birra.h
 *
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef BIRRA_H_
#define BIRRA_H_

#include <iostream>
#include "Prodotto.h"
using namespace std;

class Birra : public Prodotto{
	private:
		int ID = 1;

		int getID(){
			return ID;
		}

	public:

		//birra usa anche il costruttore di prodotto
		Birra() : Prodotto(){
			nome = "Birra";
			costo = getCosto();
		}

		//costo fisso
		double getCosto(){
			return 4.00;
		}

		string toString(){
			return "{ ID:" + to_string(ID) + "." + nome + " --> " + to_string(costo) + " $ }";
		}

		//ritorna sempre 1, override del metodo in Prodotto
		string check(){
			return to_string(ID);
		}

		//azzero l'ID, il ditruttore in Prodotto azzera anche il costo, quindi non serve azzerarlo qui
		~Birra(){
			ID = 0;
		}
};


#endif /* BIRRA_H_ */
