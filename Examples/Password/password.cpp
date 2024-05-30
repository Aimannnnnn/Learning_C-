#include <iostream>
using namespace std;

void Input_Password(string &Password){ //procedura per l'inserimento della password
    cout << "Inserisci una password: ";
    cin >> Password;
    system("clear");
}

void Input_Tentativo(string &Tentativo){    //procedura per l'inserimento del tentativo
    cout << "Accedi" << endl;
    cout << "Password: ";
    cin >> Tentativo;
    system("clear");
}

bool Controllo(string Password, string Tentativo){  //funzione che esegue un controllo di uguaglianza
    if(Password == Tentativo)       //tra i due inserimenti
        return true;

    return false;
}

int main(){

    system("clear");

    string Tentativo;
    string Password;

    Input_Password(Password);

    do{

        Input_Tentativo(Tentativo);

        if(Controllo(Password, Tentativo)){     //se la funzione restituisce vero, le due password corrispondono
            cout << "Le password corrispondono!" << endl;
            return 0;
        }
        else{       //altrimenti non corrispondono e rincomincia il do while
            cout << "Le password non corrispondono!" << endl << endl;
        }
    }while(!Controllo(Password, Tentativo));

    cin.get();
    cin.get();
return 0;
}
