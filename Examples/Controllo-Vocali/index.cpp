/*Date due parole verificare in una funzione ad HOC se il numero di vocali è lo stesso*/
#include <iostream>
#include <String>
using namespace std;
bool verifica(string parolaA,string parolaB){
	int n, m,counter=0;	
	n=parolaA.size(); //Lunghezza dell'array
	m=parolaB.size(); //La lunghezza dell'array
	for(int i=0; i<n; i++){ //ciclo che aumenta se ci sono vocali
		if(parolaA[i]=='a'||'e'||'i'||'o'||'u'){
			counter=counter+1;
		}
	}
	for(int i=0; i<m; i++){ //ciclo che diminuisce se ci sono vocali
		if(parolaB[i]=='a'||'e'||'i'||'o'||'u'){
			counter=counter-1;
		}
	}
	if(counter==0){
		return true;
	}else{
		return false;
	}
}
int main()
{	
	string parolaA; //Inserire l'intera parola
	cout<<"Inserisci la prima parola: ";
	cin>>parolaA;
	string parolaB; //Inserire l'intera parola
	cout<<"Inserisci la seconda parola: ";
	cin>>parolaB;
			if(verifica(parolaA, parolaB)){
			cout<<"Le due parola hanno lo stesso numeri di vocali\n";
			return 0;}
			else{
			cout<<"Le due parola non hanno lo stesso numeri di vocali\n";
			return 0;
		}	
	return 0;
}
