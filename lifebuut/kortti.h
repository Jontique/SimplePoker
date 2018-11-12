#pragma once
#include "includes.h"

class Kortti {

private:

	int _maa;
	int _arvo;

public:
	/*Kortti(int, int);
	
	Kortti();*/

	/*void setNimi(std::string);
	std::string getNimi();
	void setUnicode(std::string);
	std::string getUnicode();*/
	//void setMaa(int);
	//int getMaa();
	//void setArvo(int);
	//int getArvo();


	Kortti::Kortti(int maa, int arvo) {
		_maa = maa;
		_arvo = arvo;
	}

	Kortti::Kortti() {

	}

	/*bool operator<(Kortti &otherKortti) {
		cout << "_arvo = " << _arvo << " |||| otherkortti arvo = " << otherKortti.getArvo() << endl;
		if (_arvo < otherKortti.getArvo())
			return true;
		return false;
	}*/


	void Kortti::setMaa(int Maa) {
		_maa = Maa;
	}

	int Kortti::getMaa() {
		return _maa;
	}

	void Kortti::setArvo(int arvo) {
		_arvo = arvo;
	}

	int Kortti::getArvo()
	{
		return _arvo;
	}
};
