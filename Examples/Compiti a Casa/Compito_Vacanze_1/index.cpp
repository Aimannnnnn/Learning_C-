/*Dopo aver caricato in memoria un array di numeri interi con 10 componenti, calcolare il prodotto delle componenti*/
#include <iostream>
using namespace std;

int main(){
	
	int a[10]; 	
	int tot=1;
	
	for (int i=1; i<=10; i++){
		
		cout << "Inserisci il " << i << " numero: ";			// Nel ciclo vengono inseriti i valori nell'array
		cin >> a[i];											//	e poi vengono moltiplicati ad una variabile
		tot = tot * a[i];										//	totale di valore iniziale 1
		
	}
	
	cout << "Il prodotto risulta: " << tot;
	
	return 0;
}
