// 1) INIZIALIZZARE UN ARRAY CON VALORI 0 E STAMPARE A VIDEO
// 2) INIZIALIZZARE UN ARRAY DI INTERI I CUI VALORI SONO ORINATI IN MODO CRESCENTI
// 3) SCRIVERE UN ARRAY DI CARATTERI IL CUI INTERNO SIANO PRESENTI ALMENO TRE PAROLE DI
// SENSO CONPIUTO
#include <iostream>
using namespace std;

int main(){

    int n=0;

    cout << "Inserire la lunghezza delle 3 parole: ";
    cin >> n;

    char Array[3][n];  // Matrice di caratteri con 3 parole di lunghezza variabile

    cout << "Inserisci le 3 parole\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){     // Vengono inseriti i caratteri nella matrice
            cin >> Array[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){     // Vengono visualzzati i caratteri della matrice
            cout << Array[i][j];
        }
        cout << endl;
    }
return 0;
}
