#include <iostream>
using namespace std;

int main(){
	
	double mas = 0.0, v = 0.0;
	int n;
	char tasto;
	
	do{
		cout << "Inserisci un voto: ";
		cin >> v;
		n++;
		if(v > mas){
			mas = v;
		}
		cout << "Vuoi continuare? ";
		cin >> tasto;
	}
	while(tasto != 'n');
	cout << "Il massimo dei voti vale: " << mas <<".";
	cout << endl << "Hai inserito " << n << " voti.";
	
return 0;
}
