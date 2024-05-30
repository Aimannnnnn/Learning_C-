#include <iostream>
using namespace std;

int main(){
	
	double p=0, s;
	int t;
	cout << "Quanti prezzi vuoi inserire? ";
	cin >> t;
	for (int i = 0; i<t; i++){
		cout << "Inserisci il prezzo: ";
		cin >> p;
		s=s+p;
	}
	
	cout << "La somma dei prodotti risulta: " << s << " Euro.";
	
	return 0;
}
