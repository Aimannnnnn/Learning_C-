// 1) INIZIALIZZARE UN ARRAY CON VALORI 0 E STAMPARE A VIDEO
// 2) INIZIALIZZARE UN ARRAY DI INTERI I CUI VALORI SONO ORDINATI IN MODO CRESCENTI
// 3) SCRIVERE UN ARRAY DI CARATTERI IL CUI INTERNO SIANO PRESENTI ALMENO TRE PAROLE DI
// SENSO CONPIUTO
#include <iostream>
using namespace std;

int main(){

    int Array[3][3]; //Matrice di interi di grandezza 3x3

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            Array[i][j]=0;
            cout << Array[i][j];
        }
    }

return 0;
}
