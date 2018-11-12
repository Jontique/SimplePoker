#pragma once
#include "kortti.h"
class Hand {
	private:
		vector<Kortti> _hand;
		bool _varisuora = false;
		bool _suora = false;
		bool _vari = false;
		bool _tayskasi = false;
		bool _neloset = false;
		bool _kolmoset = false;
		bool _kaksiparia = false;
		bool _pari = false;


	public:
		Hand() {};
		
		void SetKasi(vector<Kortti> hand);
		void Tulosta8(); //nice pun m8
		int TunnistaKasi();
		bool TunnistaSuora();
		bool TunnistaVari();
		bool TunnistaVariSuora();
		bool TunnistaKolmoset();
		bool TunnistaNeloset();
		bool TunnistaTayskasi();
		bool Tunnista2Paria();

		bool TunnistaPari();

		

};