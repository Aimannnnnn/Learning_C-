#include <iostream>
using namespace std;

long int fattoriale(int n){
	if(n <= 1){
		return 1;
	}
	return n * fattoriale(n-1);
}

int main(){
	system("clear");

	unsigned short int n = 0;

	cout << "Inserisci un numero: ";
	cin >> n ;

	system("clear");

	cout << n << "!" << " : " << fattoriale(n);

	cin.get();
	cin.get();
	return 0;
}