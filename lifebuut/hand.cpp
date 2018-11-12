#include "hand.h"



void Hand::SetKasi(vector<Kortti> hand){
	_hand = hand;

}

void Hand::Tulosta8() { //nice pun mkasi
	/*for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		cout << "Maa = " << it->getMaa();

	}*/
	int x[5];
	int times = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		x[times] = it->getArvo();
		times++;
		//cout << "Arvo = " << it->getArvo() << "Maad = " << it->getMaa() << endl;


	}
	sort(x, x + 5);
	int y = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		cout << "Arvo = " << x[y] << "\tMaa = " << it->getMaa() << endl;
		y++;

	}
}

int Hand::TunnistaKasi() {


	_vari = TunnistaVari();
	_suora = TunnistaSuora();
	_varisuora = TunnistaVariSuora();
	_neloset = TunnistaNeloset();
	_kolmoset = TunnistaKolmoset();
	_kaksiparia = Tunnista2Paria();
	_pari = TunnistaPari();
	_tayskasi = TunnistaTayskasi();
	cout << endl;
	if (_varisuora)
		cout <<  "Dayummm son!" << endl;
	else if (_vari)
		cout << "Vari!" << endl;
	else if (_suora)
		cout << "Suora!" << endl;
	else if (_neloset)
		cout << "Neloset!" << endl;
	else if (_tayskasi)
		cout << "Tayskasi!" << endl;
	else if (_kolmoset)
		cout << "Kolmoset!" << endl;
	else if (_kaksiparia)
		cout << "Kaksi paria!" << endl;
	else if (_pari)
		cout << "Pari!" << endl;
	
	

	return 0;
}




bool Hand::TunnistaSuora() {

	int x[5];
	int times = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		x[times] = it->getArvo();
		times++;
		//cout << "Arvo = " << it->getArvo() << "Maad = " << it->getMaa() << endl;
		
		
	}
	sort(x, x + 5);
	for (int i = 0; i < 4; i++) {
		/*cout << "x = " << x[i] << "|| [x+1] = " << x[i + 1] << endl;*/
		if ((x[i]+1) != (x[i+1])) {
			return false;
		}
		
		//cout << "x = " << x[i] << endl;
	}
		

	return true;
}

bool Hand::TunnistaVari() {


	int maavari = _hand.begin()->getMaa();
	//cout << maavari << endl;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		//cout << "Arvo = " << it->getArvo() << "Maad = " << it->getMaa() << endl;
		if (it->getMaa() != maavari) {
			return false;
		}
	}


	return true;
}

bool Hand::TunnistaVariSuora() {
	if (_vari && _suora)
		return true;

	return false;
}
bool Hand::TunnistaKolmoset() {
	int x[5];
	int times = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		x[times] = it->getArvo();
		times++;
		//cout << "Arvo = " << it->getArvo() << "Maad = " << it->getMaa() << endl;


	}
	
	sort(x, x + 5);
	times = 1; //alusta

	//Easy
	for (int i = 0; i <  4; i++) {
		// cout << myArr[i] << '\n';
		for (int j = i + 1;j < 5; j++) {
			// cout << '\t' << myArr[j] << '\n';

			if (x[i] == x[j]) // then this is a duplicate 
				times++;
		}
	}
	//cout << "Times = " << times << endl;
	if (times > 4)
		times = 4;
	if (times == 4)
		return true;
	return false;
}
bool Hand::TunnistaNeloset() {
	int x[5];
	int times = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		x[times] = it->getArvo();
		times++;
		//cout << "Arvo = " << it->getArvo() << "Maad = " << it->getMaa() << endl;


	}

	sort(x, x + 5);
	


	times = 1; //alusta

			   //Easy
	for (int i = 0; i < 4; i++) {
		// cout << myArr[i] << '\n';
		for (int j = i + 1;j < 5; j++) {
			// cout << '\t' << myArr[j] << '\n';

			if (x[i] == x[j]) // then this is a duplicate 
				times++;
		}
	}
	//cout << "Times = " << times << endl;
	if (times == 7)
		return true;
	return false;
}
bool Hand::TunnistaTayskasi() {

	if (_kolmoset && _pari) {
		return true;
	}

	return false;
}
bool Hand::Tunnista2Paria() {
	int x[5];
	int times = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		x[times] = it->getArvo();
		times++;


	}

	sort(x, x + 5);
	times = 1; //alusta

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1;j < 5; j++) {

			if (x[i] == x[j]) // then this is a duplicate 
				times++;
		}
	}
	if (times == 3)
		return true;
	return false;
}


bool Hand::TunnistaPari() {
	int x[5];
	int times = 0;
	for (std::vector<Kortti>::iterator it = _hand.begin(); it != _hand.end(); ++it) {
		x[times] = it->getArvo();
		times++;


	}

	sort(x, x + 5);
	times = 1; //alusta

			   //Easy
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1;j < 5; j++) {

			if (x[i] == x[j]) // then this is a duplicate 
				times++;
		}
	}
	if (times > 2 && times != 4) {
		times = 2;
	}
	if (times == 2)
		return true;
	return false;

	return false;
}

