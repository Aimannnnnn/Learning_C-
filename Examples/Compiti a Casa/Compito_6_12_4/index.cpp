/*Inserire N interi e contare quelli maggiori di 0*/

#include <iostream>
using namespace std;

int main(){
	
	int n, c;
	
	cout << "Quanti caratteri vuoi inserire? ";
	
	cin >> n;
	
	int m[n];
	
	for (int i=1; i<=n; i++){
		
		cout << "Inserisci un carattere: ";
		cin >> m[n];
		
		if(m[n]>10)
			c++;
	}
		
	cout << "Ho rilevato " << c << " interi maggiori di 10 nell'elenco.";
	
	return 0;
}
