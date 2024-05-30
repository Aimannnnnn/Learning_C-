#include <iostream>
#include <math.h>
#include <string>
using namespace std;

//sommma tra due numeri
double Somma(double a, double b){
	return a + b;
}
//moltiplicazione tra due numeri
double Moltiplicazione(double a, double b){
	return a * b;
}
//sottrazione tra due numeri
double Sottrazione(double a, double b){
	return a - b;
}
//divisione tra due numeri, si da per scontato il controllo del divisore
double Divisione(double a, double b){
	return a / b;
}
//fattoriale di un numero qualsiasi
long Fattoriale(int a){
	if(a <= 1)
		return 1;

	return a * Fattoriale(a-1);
}
//potenza di A^B
long PotenzaAB(int a, int b){
	if(b <= 0)
		return 1;

	return a * PotenzaAB(a, b-1);
}
//radice quadrata di un numero
double RadiceQuadrata(double a){
	return sqrt(a);
}
//logaritmo in base 10 di a
double LogaritmoDecimale(double a){
	return log10(a);
}
//logaritmo naturale di a
double LogarimoNaturale(double a){
	return log(a);
}
//logaritmo in base a di b
double LogaritmoAB(double a, double b){
	return log(b) / log(a);
}