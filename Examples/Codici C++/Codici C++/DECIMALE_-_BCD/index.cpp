//Trasforma un numero da codifica BCD a numero decimale
#include <iostream>
#include <string>
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

	unsigned short int scelta = 0;

	cout << "1) BCD --> DECIMALE" << endl;
	cout << "2) DECIMALE --> BCD" << endl << endl;
	cout << "--> ";
	cin >> scelta;

	system ("clear");

	switch(scelta){
//----------------BCD-->DECIMALE------------------
		case 1:
		{
	//--------dichiarazione--delle--variabili--------
			string Input;
			int decimale;
			bool flag;
			bool global_flag;

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
				if(decimale >= 10){	
					global_flag = false;
					cout << "Il numero non fa parte del codice BCD! RIPROVA" << endl << endl;
				}

			}while(!global_flag); //ciclo che viene ripetuto in caso il numero decimale
				//superi il numero 9, visto che non esiste un corrispondete in BCD

		//----------------OUTPUT------------------
			cout << "BCD: " << Input << endl;
			cout << "DECIMALE: " << decimale;
		}
			break;
//---------------DECIMALE-->BCD---------------------
		case 2:
		{
				//---------dichiarazione--delle--variabili------------
			unsigned short int deci = 0;
			bool flag1;

			do{
				flag1 = true;

				cout << "DECIMALE: ";
				cin >> deci;
				system("clear");
				switch(deci){	//esegue il controllo del numero inserito
					case 0:	//nel caso viene inserito un numero compreso tra 0 e 9
						cout << "DECIMALE: " << deci << endl;	//visualizzo
						cout << "BCD: 0000";	//il valore decimale e il corrispettivo valore
						break;		//in BCD

					case 1:		
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0001";
						break;

					case 2:		
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0010";
						break;

					case 3:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0011";
						break;

					case 4:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0100";
						break;

					case 5:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0101";
						break;

					case 6:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0110";
						break;

					case 7:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 0111";
						break;

					case 8:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 1000";
						break;

					case 9:
						cout << "DECIMALE: " << deci << endl;
						cout << "BCD: 1001";
						break;
					
					default:
						system("clear");
						cout << "ERROR 404" << endl;
						flag1 = false;	//flag viene impostato a falso in caso il numero inserito
							//non sia uno dei casi elencati sopra, ovvero se il numero non è compreso
				}			//tra 0 e 9 e quindi non fa parte della tabella BCD

			}while(!flag1); //se flag è falso viene eseguito nuovamente il ciclo
		}
			break;

		default:
			cout << "Non accettabile!" << endl << endl;
			return main();
	}

	char carattere;
	cout << endl << "Vuoi uscire? (s/n) ";
	cin >> carattere;

	switch(carattere){
		case 'n':
		system("clear");
			return main();
			break;

		default:
		system("clear");
			cout << "Ciao! ";
	}

	cin.get();
	cin.get();

	return 0;
}