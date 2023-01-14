/*
 * Tipo.h
 *
 *  Created on: 11 dic 2022
 *      Author: 39345
 */

#ifndef TIPO_H_
#define TIPO_H_

//DUE TIPI Naturale = 0; Frizzante = 1
enum Tipo { Naturale, Frizzante };

// INVECE DI STAMPARE 0 e 1 STAMPA IL NOME!
ostream &operator << ( ostream& stringa, Tipo t )
{
   const string tipologia[] = { "Naturale", "Frizzante" };
   return stringa << tipologia[t];
}

#endif /* TIPO_H_ */
