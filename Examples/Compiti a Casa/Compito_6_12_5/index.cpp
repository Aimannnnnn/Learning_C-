/*Inserire N interi e fare la loro somma*/

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
		
		c=c+m[n];
		
	}
	cout << "La somma degli interi inseriti risulta: " << c;
	
	return 0;
}
