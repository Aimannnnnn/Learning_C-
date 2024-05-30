//Definire il tipo di dato complesso Vestiario
//In cui viene definito il tipo di vestito
//La taglia e il prezzo, scrivere le funzioni
//Per la gestione di un negozio, inserimento dei capi
//Il filtro in base ai campi e il calcolo dei prezzi
//Sull'acquisto di più prodotti

#include <iostream>

using namespace std;

struct Vestiario{

    string tipo;
    char taglia;
    double prezzo;

};

void Input(Vestiario &vestiti, int n){
    cout << "TIPO: ";
    cin >> vestiti.tipo;
    cout << "TAGLIA (s, m , l, x): ";
    cin >> vestiti.taglia;
    cout << "PREZZO: ";
    cin >> vestiti.prezzo;
return;
}

void Output(Vestiario vestiti, int n){
    cout << "TIPO: " << vestiti.tipo << endl;
    cout << "TAGLIA: " << vestiti.taglia << endl;
    cout << "PREZZO: " << vestiti.prezzo << " euro" << endl;
    cout << endl << endl;
}

void Filtro(Vestiario vestiti[], string tipo, char taglia, double prezzo, int n){
    for(int i = 0; i < n; i++){
        if(tipo == vestiti[i].tipo && taglia == vestiti[i].taglia && prezzo == vestiti[i].prezzo){
        	cout << i << ")\n";
            Output(vestiti[i], n);
        }
    }
return;
}

void Filtro(Vestiario vestiti[], string tipo, char taglia, int n){
    for(int i = 0; i < n; i++){
        if(tipo == vestiti[i].tipo && taglia == vestiti[i].taglia){
        	cout << i << ")\n";
            Output(vestiti[i], n);
        }
    }
return;
}

void Filtro(Vestiario vestiti[], string tipo, double prezzo, int n){
    for(int i = 0; i < n; i++){
        if(tipo == vestiti[i].tipo && prezzo == vestiti[i].prezzo){
        	cout << i << ")\n";
            Output(vestiti[i], n);
        }
    }
return;
}

void Filtro(Vestiario vestiti[], char taglia, double prezzo, int n){
    for(int i = 0; i < n; i++){
        if(taglia == vestiti[i].taglia && prezzo == vestiti[i].prezzo){
        	cout << i << ") ";
            Output(vestiti[i], n);
        }
    }
return;
}

void Filtro(Vestiario vestiti[], string tipo, int n){
    for(int i = 0; i < n; i++){
        if(tipo == vestiti[i].tipo){
        	cout << i << ")\n";
            Output(vestiti[i], n);
        }
    }
return;
}

void Filtro(Vestiario vestiti[], char taglia, int n){
    for(int i = 0; i < n; i++){
        if(taglia == vestiti[i].taglia){
        	cout << i << ")\n";
            Output(vestiti[i], n);
        }
    }
return;
}

void Filtro(Vestiario vestiti[], double prezzo, int n){
    for(int i = 0; i < n; i++){
        if(prezzo == vestiti[i].prezzo){
        	cout << i << ")\n";
            Output(vestiti[i], n);
        }
    }
return;
}

int main(){

    unsigned short int n = 0;
    unsigned short int filtro = 0;

    cout << "Quanti vestiti vuoi inserire? ";
    cin >> n;
    
    system("CLS");

    Vestiario vestiti[n];

    for (int i = 0; i < n; i++){
        Input(vestiti[i], n);
        system("CLS");
    }

    cout << "       FILTRI\n\n";
    cout << "1) Tipo, taglia e prezzo.\n";
    cout << "2) Tipo e taglia.\n";
    cout << "3) Tipo e prezzo.\n";
    cout << "4) Taglia e Prezzo.\n";
    cout << "5) Tipo.\n";
    cout << "6) Taglia.\n";
    cout << "7) Prezzo.\n";
	cout << "\n\nSELEZIONE: ";
    cin >> filtro;
    
    system("CLS");

    string tipo;
    char taglia;
    double prezzo = 0;

    switch(filtro){

        case 1:
            cout << "TIPO: ";
            cin >> tipo;
            cout << endl;
            cout << "TAGLIA: ";
            cin >> taglia;
            cout << endl;
            cout << "PREZZO: ";
            cin >> prezzo;
            cout << endl;
            system("CLS");
            Filtro(vestiti, tipo, taglia, prezzo, n);
            break;
        case 2:
            cout << "TIPO: ";
            cin >> tipo;
            cout << endl;
            cout << "TAGLIA: ";
            cin >> taglia;
            cout << endl;
            system("CLS");
            Filtro(vestiti, tipo, taglia, n);
            break;
        case 3:
            cout << "TIPO: ";
            cin >> tipo;
            cout << endl;
            cout << "PREZZO: ";
            cin >> prezzo;
            cout << endl;
            system("CLS");
            Filtro(vestiti, tipo, prezzo, n);
            break;
        case 4:
            cout << "TAGLIA: ";
            cin >> taglia;
            cout << endl;
            cout << "PREZZO: ";
            cin >> prezzo;
            cout << endl;
            system("CLS");
            Filtro(vestiti, taglia, prezzo, n);
            break;
        case 5:
            cout << "TIPO: ";
            cin >> tipo;
            cout << endl;
            system("CLS");
            Filtro(vestiti, tipo, n);
            break;
        case 6:
            cout << "TAGLIA: ";
            cin >> taglia;
            cout << endl;
            system("CLS");
            Filtro(vestiti, taglia, n);
            break;
        case 7:
            cout << "PREZZO: ";
            cin >> prezzo;
            cout << endl;
            system("CLS");
            Filtro(vestiti, prezzo, n);
            break;
    }

return 0;
}
