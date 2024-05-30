#include <iostream>
using namespace std;

int main(){
	
	double s = 0.0, p = 0.0;
	char tasto;
	do{
		cout << "Inserisci un prezzo: ";
		cin >> p;
		s = s + p;
		cout << "Vuoi inserire altri prezzi? ";
		cin >> tasto;
	}
	while(tasto != 'n');
	cout << "La somma vale: " << s << ".";
	
	return 0;
}
