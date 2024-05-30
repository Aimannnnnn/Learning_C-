/*Dopo aver caricato in memoria un array di numeri interi con 10 componenti, contare le componenti che hanno un valore superiore a 5.*/
#include <iostream>
using namespace std;

int main(){
	
	int a[10];
	int tot=0;
	
	for (int i=1; i<=10; i++){
		
		cout << "Inserisci il " << i << " numero: ";
		cin >> a[i];
		
		if (a[i]>5)
			tot++;
		
	}
	
	cout << endl << "Nei numeri che hai inserito ci sono stati " << tot << " numeri superiori a 5.";
	
	return 0;
}
