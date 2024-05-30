//Scrivere un programma che dato un array,
//calcoli la somma di tutti gli elementi in,
//posizione pari e un'altra somma di tutti gli
//elementi in posizione dispari, inoltre fare
//una funzione che faccia la media delle due 
//somme
#include <iostream>
using namespace std;

void Inserimento_Array(double Array[], int n){
	for(int i = 0; i < n; i++){
		cout << i + 1 <<  ") ";
		cin >> Array[i];
	}
	return;
}

void Somma_Elementi(double &somma_pari, double &somma_dispari, int n, double Array[]){
	for(int i = 0; i < n; i += 2){
		somma_pari += Array[i];
	}

	for(int i = 1; i < n; i += 2){
		somma_dispari += Array[i];
	}
	return;
}

double Media(double somma_dispari, double somma_pari){
	return (somma_pari + somma_dispari) / 2;
}

int main(){

	system("clear");

	int n = 0;

	cout << "Quanti elementi si vogliono inserire? ";
	cin >> n;

	//system("clear");

	double Array[n];
	double somma_pari = 0;
	double somma_dispari = 0;

	Inserimento_Array(Array, n);

	Somma_Elementi(somma_pari, somma_dispari, n, Array);

	double media = Media(somma_dispari, somma_pari);

	system("clear");

	cout << "La somma delle posizioni pari risulta: " << somma_pari << "." << endl;
	cout << "La somma delle posizioni dispari risulta: " << somma_dispari << "." << endl;
	cout << "La media delle due somme risulta: " << media << "." << endl;



	cin.get();
	cin.get();
	return 0;
}