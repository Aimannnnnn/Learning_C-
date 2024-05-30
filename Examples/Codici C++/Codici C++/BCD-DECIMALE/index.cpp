//Trasforma un numero da codifica BCD a numero decimale
#include <iostream>
using namespace std;

//procedura che "trasforma" una stringa in un'array di interi
void Conversione(string Input, int Array_Input[]){
	int size = Input.size();
	for(int i = 0; i < size; i++){
		Array_Input[i] = Input[i]-'0';
	}
	return;
}

//funzione booleana che controlla che il dato inserito sia di grandezza
bool Controllo(int Array_Input[],int size){	//4 bit (come vuole la codifica
	//BCD) 
	if(size > 4)
		return false;
	//esegue inoltre un controllo sui singoli bit
	for(int i = 0; i < size; i++){	//devono infatti essere bit 1 o 0
		if(Array_Input[i] != 0 && Array_Input[i] != 1)
			return false;
	}
	return true;
}
//procedura che esegue una somma se il bit corrisponde a 1
void Decimale(int Array_Input[], int &decimale){
	decimale = 0;	//ogni bit ha valore diverso quindi ogni posizione
	if(Array_Input[0] == 1)	//avrà un valore da sommare differente
		decimale += 8;

	if(Array_Input[1] == 1)
		decimale += 4;

	if(Array_Input[2] == 1)
		decimale += 2;

	if(Array_Input[3] == 1)
		decimale += 1;
	return;
}

int main(){
//--------dichiarazione--delle--variabili--------
	string Input;
	int decimale = 0;
	bool flag = true, global_flag = true;

	do{	
		global_flag = true;
		do{
			flag = true;
			cout << "BCD: ";
			cin >> Input;
			system("clear");
			int size = Input.size();

			int Array_Input[size];

			Conversione(Input, Array_Input);
			Decimale(Array_Input, decimale);

			if(!Controllo(Array_Input, size)){
				cout << "Numero non accettabile!" << endl << endl;
				flag = false;
			}

			//se la funzione controllo restituisce falso viene
		}while(!flag);	//ripetuto questo ciclo
		if(decimale >= 10)	
			global_flag = false;
		cout << "Il numero non fa parte del codice BCD! RIPROVA" << endl << endl;

	}while(!global_flag); //ciclo che viene ripetuto in caso il numero decimale
		//superi il numero 9, visto che non esiste un corrispondete in BCD

//----------------OUTPUT------------------
	cout << "BCD: " << Input << endl;
	cout << "DECIMALE: " << decimale;

	cin.get();
	cin.get();

	return 0;
}