//INTERROGAZIONE
#include <iostream>
using namespace std;

struct studente{
    string nome;
    unsigned short int eta;
    double voto;
};

void input(studente &galilei){
    cout << "Nome: ";
    cin >> galilei.nome;
    cout << "Eta': ";
    cin >> galilei.eta;
    cout << "Voto: ";
    cin >> galilei.voto;
    system("CLS");
}

void stampa(studente galilei){
    cout << "Nome: " << galilei.nome << endl;
    cout << "Eta': " << galilei.eta << endl;
    cout << "Voto: " << galilei.voto << endl;
}

void filtro(studente galilei[], string nome, unsigned short int eta, double voto, int n){
    for(int i = 0; i < n; i++){
        if((nome == galilei[i].nome) && (eta == galilei[i].eta) && (voto == galilei[i].voto)){
            stampa(galilei[i]);
        }
    }
}

void filtro(studente galilei[], string nome, unsigned short int eta, int n){
    for(int i = 0; i < n; i++){
        if(nome == galilei[i].nome && eta == galilei[i].eta){
            stampa(galilei[i]);
        }
    }
}

void filtro(studente galilei[], string nome, double voto, int n){
    for(int i = 0; i < n; i++){
        if(nome == galilei[i].nome &&  voto == galilei[i].voto){
            stampa(galilei[i]);
        }
    }
}

void filtro(studente galilei[], unsigned short int eta, double voto, int n){
    for(int i = 0; i < n; i++){
        if(eta == galilei[i].eta && voto == galilei[i].voto){
            stampa(galilei[i]);
        }
    }
}

void filtro(studente galilei[], string nome, int n){
    for(int i = 0; i < n; i++){
        if(nome == galilei[i].nome){
            stampa(galilei[i]);
        }
    }
}

void filtro(studente galilei[], unsigned short int eta, int n){
    for(int i = 0; i < n; i++){
        if(eta == galilei[i].eta){
            stampa(galilei[i]);
        }
    }
}

void filtro(studente galilei[], double voto, int n){
    for(int i = 0; i < n; i++){
        if(voto == galilei[i].voto){
            stampa(galilei[i]);
        }
    }
}



int main(){

    int n=0, filtro_a=0;
    cout << "Quanti studenti si voglioni inserire? ";
    cin >> n;
    studente galilei[n];
	system("CLS");
    for(int i = 0; i < n; i++){
        input(galilei[i]);
        system("CLS");
    }

    cout << "FILTRI DISPONIBILI\n\n";
    cout << "1) Nome, eta' e voto.\n";
    cout << "2) Nome e eta'.\n";
    cout << "3) Nome e voto.\n";
    cout << "4) Eta' e voto.\n";
    cout << "5) Nome.\n";
    cout << "6) Eta'.\n";
    cout << "7) Voto.\n\n";
    cout << "SELEZIONA FILTRO: ";
    cin >> filtro_a;
    system("CLS");
    string nome;
    unsigned short int eta;
    double voto;

    switch(filtro_a){
        case 1:
            cout << "Nome: ";
            cin >> nome;
            cout << "Eta' : ";
            cin >> eta;
            cout << "Voto: ";
            cin >> voto;
            system("CLS");
            filtro(galilei, nome, eta, voto, n);         
			break;
        case 2:
            cout << "Nome: ";
            cin >> nome;
            cout << "Eta': ";
            cin >> eta;
            system("CLS");
            filtro(galilei, nome, eta, n);
            break;
        case 3:
            cout << "Nome: ";
            cin >> nome;
            cout << "Voto: ";
            cin >> voto;
            system("CLS");
            filtro(galilei, nome, voto, n);
            break;
        case 4:
            cout << "Eta': ";
            cin >> eta;
            cout << "Voto: ";
            cin >> voto;
            system("CLS");
            filtro(galilei, eta, voto, n);
            break;
        case 5:
            cout << "Nome: ";
            cin >> nome;
            system("CLS");
            filtro(galilei, nome, n);
            break;
        case 6:
            cout << "Eta': ";
            cin >> eta;
            system("CLS");
            filtro(galilei, eta, n);
            break;
        case 7:
            cout << "Voto: ";
            cin >> voto;
            system("CLS");
            filtro(galilei, voto, n);
            break;

        default:
        	system("CLS");
            cout << "Non disponibile!";
            return 0;
    }
return 0;
}
