#include <iostream>
#include <math.h>
using namespace std;

double Somma(double a, double b){
	double somma = a + b;
	return somma;
}	

double Sottrazione(double a, double b){
	double sottrazione = a - b;
	return sottrazione;
}

double Moltiplicazione(double a, double b){
	double moltiplicazione = a * b;
	return moltiplicazione;
}

double Divisione(double a, double b){
	double divisione = a / b;
	return divisione;
}

double Potenza(double a, double b){
	double Potenza = pow(a,b);
	return Potenza;
}

void Stampa(double somma, double sottrazione, double moltiplicazione, double divisione, double potenza, bool divisore){
	cout << "SOMMA: " << somma << endl;
	cout << "SOTTRAZIONE: " << sottrazione << endl;
	cout << "MOLTIPLICAZONE: " << moltiplicazione << endl;
	if(divisore){
		cout << "DIVISIONE: " << divisione << endl;
	}
	if(!divisore){
		cout << "DIVISIONE: IMPOSSIBILE" << endl;
	}
	cout << "POTENZA: " << potenza << endl;
}

int main(){

	double a = 0;
	double b = 0;
	double divisione = 0;
	double somma = 0;
	double sottrazione = 0;
	double moltiplicazione = 0;
	double potenza = 0;
	bool divisore;
	char ripetizione;

	do{
		system("clear");
		cout << "A) ";
		cin >> a;
		cout << "B) ";
		cin >> b;

		somma = Somma(a,b);
		sottrazione = Sottrazione(a,b);
		moltiplicazione = Moltiplicazione(a,b);
		if(b != 0){
			divisione = Divisione(a,b);
			divisore = true;
		}

		else
			divisore = false;
		potenza = Potenza(a,b);

		Stampa(somma, sottrazione, moltiplicazione, divisione, potenza, divisore);

		cout << endl << endl <<"Vuoi uscire? (s/n) ";
		cin >> ripetizione;

	}while(ripetizione == 'n' || ripetizione == 'N');

	system("clear");
	cout << "CIAO! ";

	cin.get();
	cin.get();
	return 0;
}