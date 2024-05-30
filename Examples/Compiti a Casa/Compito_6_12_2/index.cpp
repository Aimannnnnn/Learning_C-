/*Inserire N caratteri e contre le vocali*/

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
		
		switch (m[n]){
			
			case 'a': 
				c++;
				break;
			case 'e':
				c++;
				break;
			case 'i':
				c++;
				break;
			case 'o':
				c++;
				break;
			case 'u':
				c++;
				break;
			default:
				break;
			
		}
		
	}
	cout << "Ho rilevato " << c << " vocale/i nell'elenco.";
	
	return 0;
}
