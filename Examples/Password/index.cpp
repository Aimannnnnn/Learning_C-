#include <iostream>
using namespace std;
	
int main() {
	
	string password, errore; //dichiarazione delle stringhe della password e 
	bool flag = false;	//del "login"
	
	cout << "INSERIRE PASSWORD: ";
	cin >> password;	//inserimento della password
	
	system("CLS");
	
	do{	
		cout << "Password: ";
		cin >> errore;		//inserimento del "login"
		
		system("CLS");
			
		if(password == errore)	//controllo di uguaglianza delle stringhe
			flag = true;
	
		if(!flag)	//se il flag è falso la password è errata
			cout << "La password e' errata!" << endl << endl;
		
	
	}while(!flag); //e viene ripetuto l'inserimento del "login"
	
	system("CLS");
	
	cout << "La password e' corretta!"; //quando il flag è vero e quindi esce dal do
										//while la password è corretta
	return 0;
	}
