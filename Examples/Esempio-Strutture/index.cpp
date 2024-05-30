#include <iostream>
using namespace std;



struct studente{
    int matricola;
    string nome;
    string cognome;
    double voto_teorico;
    double voto_pratico;
    bool presente;
};

void primo(studente &qualsiasi){
    cout << "Inserire il numero della matricola: ";
    cin >> qualsiasi.matricola;

    cout << "Inserire il Nome: ";
    cin >> qualsiasi.nome;

    cout << "Inserire il cognome: ";
    cin >> qualsiasi.cognome;

    cout << "Inserire il voto teorico: ";
    cin >> qualsiasi.voto_teorico;

    cout << "Inserire il voto pratico: ";
    cin >> qualsiasi.voto_pratico;

    cout << "Lo studente è presente (SI=1/NO=0): ";
    cin >> qualsiasi.presente;
    system("CLS");
}

double media(studente qualsiasi){
    return (qualsiasi.voto_pratico+qualsiasi.voto_teorico)/2;
}

void stampa(studente qualsiasi){
    cout << "Matricola: " << qualsiasi.matricola;
    cout << "\nNome: " << qualsiasi.nome;
    cout << "\nCognome: " << qualsiasi.cognome;
    cout << "\nVoto teorico: " << qualsiasi.voto_teorico;
    cout << "\nVoto pratico: " << qualsiasi.voto_pratico;
    cout << "\nMedia: " << media(qualsiasi);
    if(qualsiasi.presente==true){
        cout << "\nPresente.\n";
    }
    else{
        cout << "\nAssente.\n";
    }
    cout << endl << endl;
}

int main(){
    int n;
    cout << "Quanti studenti si voglioni inserire? ";
    cin >> n;
    system("CLS");
    studente qualsiasi[n];
    for(int i = 0; i < n; i++){
        primo(qualsiasi[i]);
    }
    system("CLS");
    for(int j = 0; j < n; j++){
        stampa(qualsiasi[j]);
    }

return 0;
}
