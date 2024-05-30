//Trasforma un numero decimale in codifica BCD
#include <iostream>
using namespace std;

int main(){
//---------dichiarazione--delle--variabili------------
	unsigned short int decimale = 0;
	bool flag = true;

	do{
		flag = true;

		cout << "DECIMALE: ";
		cin >> decimale;
		system("clear");
		switch(decimale){	//esegue il controllo del numero inserito
			case 0:	//nel caso viene inserito un numero compreso tra 0 e 9
				cout << "DECIMALE: " << decimale << endl;	//visualizzo
				cout << "BCD: 0000";	//il valore decimale e il corrispettivo valore
				break;		//in BCD

			case 1:		
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0001";
				break;

			case 2:		
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0010";
				break;

			case 3:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0011";
				break;

			case 4:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0100";
				break;

			case 5:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0101";
				break;

			case 6:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0110";
				break;

			case 7:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 0111";
				break;

			case 8:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 1000";
				break;

			case 9:
				cout << "DECIMALE: " << decimale << endl;
				cout << "BCD: 1001";
				break;
			
			default:
				system("clear");
				cout << "ERROR 404" << endl;
				flag = false;	//flag viene impostato a falso in caso il numero inserito
					//non sia uno dei casi elencati sopra, ovvero se il numero non è compreso
		}			//tra 0 e 9 e quindi non fa parte della tabella BCD

	}while(!flag); //se flag è falso viene eseguito nuovamente il ciclo

	cin.get();
	cin.get();
	return 0;
}