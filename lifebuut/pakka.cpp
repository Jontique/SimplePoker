#include "pakka.h"
#include <time.h>




void Pakka::Alusta() {

	korttipakka.push_back(*_ristiA);
	korttipakka.push_back(*_risti2);
	korttipakka.push_back(*_risti3);
	korttipakka.push_back(*_risti4);
	korttipakka.push_back(*_risti5);
	korttipakka.push_back(*_risti6);
	korttipakka.push_back(*_risti7);
	korttipakka.push_back(*_risti8);
	korttipakka.push_back(*_risti9);
	korttipakka.push_back(*_risti10);
	korttipakka.push_back(*_ristiJ);
	korttipakka.push_back(*_ristiQ);
	korttipakka.push_back(*_ristiK);

	korttipakka.push_back(*_ruutuA);
	korttipakka.push_back(*_ruutu2);
	korttipakka.push_back(*_ruutu3);
	korttipakka.push_back(*_ruutu4);
	korttipakka.push_back(*_ruutu5);
	korttipakka.push_back(*_ruutu6);
	korttipakka.push_back(*_ruutu7);
	korttipakka.push_back(*_ruutu8);
	korttipakka.push_back(*_ruutu9);
	korttipakka.push_back(*_ruutu10);
	korttipakka.push_back(*_ruutuJ);
	korttipakka.push_back(*_ruutuQ);
	korttipakka.push_back(*_ruutuK);

	korttipakka.push_back(*_pataA);
	korttipakka.push_back(*_pata2);
	korttipakka.push_back(*_pata3);
	korttipakka.push_back(*_pata4);
	korttipakka.push_back(*_pata5);
	korttipakka.push_back(*_pata6);
	korttipakka.push_back(*_pata7);
	korttipakka.push_back(*_pata8);
	korttipakka.push_back(*_pata9);
	korttipakka.push_back(*_pata10);
	korttipakka.push_back(*_pataJ);
	korttipakka.push_back(*_pataQ);
	korttipakka.push_back(*_pataK);

	korttipakka.push_back(*_herttaA);
	korttipakka.push_back(*_hertta2);
	korttipakka.push_back(*_hertta3);
	korttipakka.push_back(*_hertta4);
	korttipakka.push_back(*_hertta5);
	korttipakka.push_back(*_hertta6);
	korttipakka.push_back(*_hertta7);
	korttipakka.push_back(*_hertta8);
	korttipakka.push_back(*_hertta9);
	korttipakka.push_back(*_hertta10);
	korttipakka.push_back(*_herttaJ);
	korttipakka.push_back(*_herttaQ);
	korttipakka.push_back(*_herttaK);

}
Pakka::Pakka() {
	//Alusta();
}
void Pakka::Shuffle() {
	srand(time(0)); //random seed
	random_shuffle(korttipakka.begin(), korttipakka.end() );
}

void Pakka::TulostaPakka()
{
	//_risti10->getArvo();
	for (std::vector<Kortti>::iterator it = korttipakka.begin(); it != korttipakka.end(); ++it) {
		cout << "Arvo = " << it->getArvo() << "Maa = " << it->getMaa() << endl;
			
	}
}

vector<Kortti> Pakka::Jaa() {

	vector<Kortti> hand;

	Kortti temp = korttipakka.back();
	for (int i = 0; i < 5; i++) {
		Kortti temp = korttipakka.back();
		hand.push_back(temp);
		korttipakka.pop_back();
	/*	cout << temp.getArvo() << endl;*/

	}

	return hand;
}

vector<Kortti> Pakka::JaaRigged() {
	vector<Kortti> hand;
	cout << "Et kai sä vaan juksutua mua?" << endl;

	return hand;
}
