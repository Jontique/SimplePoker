#include "controller.h"
#include "hand.h"

void Controller::Pelaa() {
	Pakka pakka;
	Hand hand;
	pakka.Alusta();
	//pakka.TulostaPakka();
	pakka.Shuffle();
	cout << "-------------------SHUFFLING-------------------\n" << endl;
	//pakka.TulostaPakka();

	cout << "DEALING\n";
	
	//pakka.Jaa();
	hand.SetKasi(pakka.Jaa());
	hand.Tulosta8();
	hand.TunnistaKasi();

}