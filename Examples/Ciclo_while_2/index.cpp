#include <iostream>
using namespace std;

int main(){
	
	int t = 0, v = 0, a = 0, c = 0;
	double m = 0.0;
	char tasto;
	do{
		cout << "Inserisci un voto: ";
		cin >> v;
		t = t + v;
		if(v > a){
			a = v;
		}
		c++;
		cout << "Vuoi inserire altri voti? ";
		cin >> tasto;
	}
	while(tasto != 'n');
	m = t / c;
	cout << "La media e' di " << m << ".";
	cout << endl << "Il voto migliore e' " << a << ".";
	
	return 0;
}
