/*Inserire N caratteri e contre le lettere A*/
#include <iostream>
using namespace std;

int main(){
	
	int n, c;
	
	cout << "Quanti caratteri vuoi inserire? ";
	
	cin >> n;
	
	char m[n];
	
	for (int i=1; i<=n; i++){
		
		cout << "Inserisci un carattere: ";
		cin >> m[n];
		
		if(m[n]=='A')
			c++;
		
	}
	cout << "Ho rilevato " << c << " A nell'elenco.";
	
	return 0;
}
