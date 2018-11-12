#pragma once
#include "kortti.h"


class Pakka {

	private: 
		vector<Kortti> korttipakka;
	/*	cout << "\n\t_____yesbox______" << endl;
		cout << "\t|      Maat        |" << endl;
		cout << "\t|__________________|" << endl;
		cout << "\t|	 Risti = 1	  |" << endl;
		cout << "\t|	 Ruutu = 2	  |" << endl;
		cout << "\t|	 Pata = 3     |" << endl;
		cout << "\t|	 Hertta = 4   |" << endl;
		cout << "\t|__________________|" << endl;*/

		//Kortti::Kortti(int maa, int arvo) 

		
		Kortti* _ristiA = new Kortti(1, 1);
		Kortti* _risti2 = new Kortti(1, 2);
		Kortti* _risti3 = new Kortti(1, 3);
		Kortti* _risti4 = new Kortti(1, 4);
		Kortti* _risti5 = new Kortti(1, 5);
		Kortti* _risti6 = new Kortti(1, 6);
		Kortti* _risti7 = new Kortti(1, 7);
		Kortti* _risti8 = new Kortti(1, 8);
		Kortti* _risti9 = new Kortti(1, 9);
		Kortti* _risti10 = new Kortti(1, 10);
		Kortti* _ristiJ = new Kortti(1, 11);
		Kortti* _ristiQ = new Kortti(1, 12);
		Kortti* _ristiK = new Kortti(1, 13);

		Kortti* _ruutuA = new Kortti(2, 1);
		Kortti* _ruutu2 = new Kortti(2, 2);
		Kortti* _ruutu3 = new Kortti(2, 3);
		Kortti* _ruutu4 = new Kortti(2, 4);
		Kortti* _ruutu5 = new Kortti(2, 5);
		Kortti* _ruutu6 = new Kortti(2, 6);
		Kortti* _ruutu7 = new Kortti(2, 7);
		Kortti* _ruutu8 = new Kortti(2, 8);
		Kortti* _ruutu9 = new Kortti(2, 9);
		Kortti* _ruutu10 = new Kortti(2, 10);
		Kortti* _ruutuJ = new Kortti(2, 11);
		Kortti* _ruutuQ = new Kortti(2, 12);
		Kortti* _ruutuK = new Kortti(2, 13);

		Kortti* _pataA = new Kortti(3, 1);
		Kortti* _pata2 = new Kortti(3, 2);
		Kortti* _pata3 = new Kortti(3, 3);
		Kortti* _pata4 = new Kortti(3, 4);
		Kortti* _pata5 = new Kortti(3, 5);
		Kortti* _pata6 = new Kortti(3, 6);
		Kortti* _pata7 = new Kortti(3, 7);
		Kortti* _pata8 = new Kortti(3, 8);
		Kortti* _pata9 = new Kortti(3, 9);
		Kortti* _pata10 = new Kortti(3, 10);
		Kortti* _pataJ = new Kortti(3, 11);
		Kortti* _pataQ = new Kortti(3, 12);
		Kortti* _pataK = new Kortti(3, 13);
		

		Kortti* _herttaA = new Kortti(4, 1);
		Kortti* _hertta2 = new Kortti(4, 2);
		Kortti* _hertta3 = new Kortti(4, 3);
		Kortti* _hertta4 = new Kortti(4, 4);
		Kortti* _hertta5 = new Kortti(4, 5);
		Kortti* _hertta6 = new Kortti(4, 6);
		Kortti* _hertta7 = new Kortti(4, 7);
		Kortti* _hertta8 = new Kortti(4, 8);
		Kortti* _hertta9 = new Kortti(4, 9);
		Kortti* _hertta10 = new Kortti(4, 10);
		Kortti* _herttaJ = new Kortti(4, 11);
		Kortti* _herttaQ = new Kortti(4, 12);
		Kortti* _herttaK = new Kortti(4, 13);

public:


	Pakka();
	void Alusta();
	void Shuffle();
	void TulostaPakka();
	vector<Kortti> Jaa();
	vector<Kortti> JaaRigged();
};