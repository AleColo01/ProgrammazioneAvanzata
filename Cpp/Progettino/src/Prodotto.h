/*
 * Prodotto.h
 *
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef PRODOTTO_H_
#define PRODOTTO_H_

#include <iostream>
using namespace std;

class Prodotto{
	private:
		const int ID = 0;

		int getID(){
			return ID;
		}

	public:

		string nome;
		double costo;

		Prodotto(){
			costo = getCosto();
		}

		//ritorna un costo pari a 0
		double getCosto(){
			return 0;
		}

		virtual string toString(){
			return nome;
		}

		//ritorna l'ID, utilizzato per verificare che tipo di prodotto è
		virtual string check(){
			return to_string(ID);
		}

		/*azzero il costo e svuoto il nome. Alcune sottoclassi potrebbero
		 effettuare altre modifiche */
		virtual ~Prodotto(){
			costo = 0;
			nome = "";
		}

};


#endif /* PRODOTTO_H_ */
