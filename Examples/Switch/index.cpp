/*Inserire un numero da 1 a 12 e restituire il mese*/
#include <iostream>
using namespace std;

int main(){	
	int mese;	
	cout << "Inserisci un numero da 1 a 12: ";	
	cin >> mese;	
	switch (mese){
		case (1):
			cout << "\nGennaio";
		break;
		case (2):
			cout << "\nFebbraio";
		break;
		case (3):
			cout << "\nMarzo";
		break;
		case (4):
			cout << "\nAprile";
		break;
		case (5):
			cout << "\nMaggio";
		break;
		case (6):
			cout << "\nGiungno";
		break;
		case (7):
			cout << "\nLuglio";
		break;
		case (8):
			cout << "\nAgosto";
		break;
		case (9):
			cout << "\nSettembre";
		break;
		case (10):
			cout << "\nOttobre";
		break;
		case (11):
			cout << "\nNovembre";
		break;
		case (12):
			cout << "\nDicembre";
		break;
		default:
			cout << "\nMese non disponibile ";
		break;
	}
	return 0;
}
