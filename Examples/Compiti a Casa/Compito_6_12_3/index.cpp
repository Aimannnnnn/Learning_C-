/*Inserire N caratteri e contre le consonanti*/

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
				break;
			case 'e':
				break;
			case 'i':
				break;
			case 'o':
				break;
			case 'u':
				break;
			default:
				c++;
				break;
			
		}
		
	}
	cout << "Ho rilevato " << c << " consonate/i nell'elenco.";
	
	return 0;
}
	
