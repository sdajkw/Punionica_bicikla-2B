//punionica raspalaze s ukupno 6 prikljucaka , ceka broj bicikala 5 izlaz za to 5 0 6
//1 - 3 bicikla je 1,5 eura a 4 ili visi od jedanput 1,2 eura rijesi u funkcijama 2 ulaza s koliko je slobodno u ovom krugu od 6 i koliko bicikla imas

#include <iostream>
using namespace std;

int prikljucenih(int s, int b) {
	if (b < s) 
		return b;
	else
		return s;
}

double cijena(int n) {
	if (n >= 4) 
		return n * 1.2;
	else
		return n * 1.5;
}

void ispis(int n, int cekaju, double c) {
	cout << "\n" << n << " Napunili \n" << cekaju << " Cekaju red\n" << c << " Eura\n";
}

int main() {
	int s, b;
	cin >> b >> s; //prvo broj bicikla pa broj slobodnih mjesta

	if (s < 0 || s > 6 || b < 0) {
		cout << "KRIVI UNOS! \n";
		return 0;
	}

	int n = prikljucenih(s, b);
	ispis(n, b - n, cijena(n));
}