/*Dopo aver caricato in memoria un array di numero interi con 10 componenti, raddoppiare il valore delle prime tre componenti.*/
#include <iostream>
using namespace std;

int main(){
	
	int a[10];
	int cont=1;
	
	for (int i=1; i<=10; i++){
		
		cout << "Inserisci il " << i << " numero: ";
		cin >> a[i];
		
	}
	a[1*2];
	a[2*2];
	a[3*2];
	
	for (int i=1; i<=10; i++){
		
		cout << cont++ << "		" << a[i] << endl;
		
	}
	
	return 0;
}
