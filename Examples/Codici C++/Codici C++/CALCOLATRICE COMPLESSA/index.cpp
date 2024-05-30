#include <iostream>
#include <math.h>
using namespace std;

int SceltaIniziale(){
	int scelta = 0;

	cout << "1) Somma (x+y)" << endl;
	cout << "2) Sottrazione (x-y)" << endl;
	cout << "3) Moltiplicazione (x*y)" << endl;
	cout << "4) Divisione (x/y)" << endl;
	cout << "5) Potenza (x^2)" << endl;
	cout << "6) Potenza (x^3)" << endl;
	cout << "7) Potenza (x^y)" << endl;
	cout << "8) Radice quadrata di x" << endl;
	cout << "9) Logaritmo (log x)" << endl;
	cout << "10) Logaritmo naturale (ln x)" << endl;
	cout << "11) Logaritmo (logy x)" << endl;
	cout << endl << endl << "--> ";
	cin >> scelta;
	system("clear");
	return scelta;
}

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

bool ControlloDivisione(int b){
	if(b != 0)
		return true;
	else
		return false;
}

double Divisione(double a, double b){
	double divisione = a/b;
	return divisione;
}

double PotenzaDiDue(double a){
	double Potenza = pow(a,2);
	return Potenza;
}

double PotenzaDiTre(double a){
	double Potenza = pow(a, 3);
	return Potenza;
}

double PotenzaTraAeB(double a, double b){
	double Potenza = pow(a,b);
	return Potenza;
}

double Radice(double a){
	double radice = sqrt(a);
	return radice;
}

double LogaritmoBaseDieci(double a){
	double logaritmo = log10(a);
	return logaritmo;
}

double LogaritmoNaturale(double a){
	double logaritmo = log(a);
	return logaritmo;
}

double LogaritmoBaseAdiB(double a, double b){
	double logaritmo = log(b)/log(a);
	return logaritmo;
}

void Input(double &a, double &b){
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
}

void Input(double &a){
	cout << "A: ";
	cin >> a;
}

void Switch(){
	int scelta = SceltaIniziale();
	switch(scelta){
		case 1:
		{
			double a = 0;
			double b = 0;
			Input(a,b);
			system("clear");
			double somma = Somma(a,b);
			cout << "Somma tra " << a << " e " << b << " risulta " << somma;
			break;
		}
		case 2:
		{
			double a = 0;
			double b = 0;
			Input(a,b);
			system("clear");
			double sottrazione = Sottrazione(a,b);
			cout << "Sottrazione tra " << a << " e " << b << " risulta " << sottrazione;
			break;
		}
		case 3:
		{
			double a = 0;
			double b = 0;
			Input(a,b);
			system("clear");
			double moltiplicazione = Moltiplicazione(a,b);
			cout << "Moltiplicazione tra " << a << " e " << b << " risulta " << moltiplicazione;
			break;
		}
		case 4:
		{
			double a = 0;
			double b = 0;
			Input(a,b);
			system("clear");
			if(!ControlloDivisione(b)){
				cout << "Impossibile!";
			}
			else{
				double divisione = Divisione (a,b);
				cout << "Divisione tra " << a << " e " << b << " risulta " << divisione;
			}
			break;
		}
		case 5:
		{
			double a = 0;
			Input(a);
			system("clear");
			double potenza = PotenzaDiDue(a);
			cout << "Potenza " << a << "^2 risulta " << potenza;
			break;
		}
		case 6:
		{
			double a = 0;
			Input(a);
			system("clear");
			double potenza = PotenzaDiTre(a);
			cout << "Potenza " << a << "^3 risulta " << potenza;
			break;
		}
		case 7:
		{
			double a = 0;
			double b = 0;
			Input(a,b);
			system("clear");
			double potenza = PotenzaTraAeB(a,b);
			cout << "Potenza " << a << "^" << b << " risulta " << potenza;
			break;
		}
		case 8:
		{
			double a = 0;
			Input(a);
			system("clear");
			double radice =  Radice(a);
			cout << "Radice quadrata di " << a << " risulta " << radice;
			break;
		}
		case 9:
		{
			double a = 0;
			Input(a);
			system("clear");
			double logaritmo = LogaritmoBaseDieci(a);
			cout << "Logaritmo in base 10 di " << a << " risulta " << logaritmo;
			break;
		}
		case 10:
		{
			double a = 0;
			Input(a);
			system("clear");
			double logaritmo = LogaritmoNaturale(a);
			cout << "Logaritmo naturale di " << a << " risulta " << logaritmo;
			break;
		}
		case 11:
		{
			double a = 0;
			double b = 0;
			Input(a,b);
			system("clear");
			double logaritmo = LogaritmoBaseAdiB(a,b);
			cout << "Logaritmo in base " << a << " di " << b << " risulta " << logaritmo;
			break;
		}
		default:
		{
			cout << "Non accettabile!";
			
 		}
	}
}


int main(){
	system("clear");
	cout << "CALCOLATRICE" << endl;

	Switch();

	char ripetizione;

	goto Ripetizione;

	Ripetizione:
	{
		cout << endl << endl << "Vuoi uscire? (s/n) ";
		cin >> ripetizione;
		if(ripetizione != 'n' && ripetizione != 's' && ripetizione != 'N' && ripetizione != 'S'){
			system("clear");
			cout << "Non accettabile (si = s/S e no = n/N) " << endl;
			goto Ripetizione;
		}
		if(ripetizione == 'n' || ripetizione == 'N')
			main();
	}

	system("clear");

	cout << "CIAO!";

	cin.get();
	cin.get();
	return 0;
}