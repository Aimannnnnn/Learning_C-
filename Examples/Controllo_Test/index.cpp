//DATO UN ARRAY DI CARATTERI E UN CARATTERE TEST
//VERIFICARE SE TEST E' PRESENTE
#include <iostream>
using namespace std;

void Input(char* Array, int n){		//procedura per l'inserimento dei caratteri
	char* pointer = Array;		//nell'array utilizzando i puntatori
	for(int i = 0; i < n; i++){
		cout << "Inserisci il carattere: ";
		cin >> *(pointer+i);
		system("CLS");
	}
return;
}

bool Controllo(char* Array, char test, int n){	//funzione booleana che controlla
	char* pointer = Array;		//la presenza del carattere test e restituisce vero
	for(int i = 0; i < n; i++){		//in caso sia presente nell'array e falso
		if(*(pointer+i) == test)	//in caso contrario
			return true;
	}
return false;
}

int main(){
	
	int n = 0;
	char test = 'm';	//variabile test
	
	cout << "Quanti caratteri si vogliono inserire? ";
	cin >> n;	//dimensione dell'array di caratteri
	
	system("CLS");
	
	char Array[n]; //array di caratteri lungo n
	
	Input(Array, n); //richiamo la procedura per l'inserimento dei dati
	
	switch(Controllo(Array, test, n)){	//richiamo la funzione Controllo all'interno dello switch
		case true:		//in caso restituisca vero il carattere è presente, successivamente visualizzato il messaggio 
			cout << "Il carattere '" << test << "' e' presente nei caratteri inseriti!";	//puo terminarsi il programma
			return 0;
			break;
		case false:		//in caso restituisca falso il carattere non è presente, successivamente visualizzati il messaggio
			cout << "Il carattere '" << test << "' non e' presente nei caratteri inseriti!";	//puo terminarsi il programma
			return 0;
			break;
	}
	
	return 0;
}
