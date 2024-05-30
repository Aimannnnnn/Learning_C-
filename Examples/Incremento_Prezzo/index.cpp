//Aggiornamento prezzo incrementandolo del 3%
#include <iostream>
using namespace std;

void Incremento(double &prezzo){
    prezzo = prezzo + ((prezzo * 3) / 100);
}

// se vuoi fare la stessa cosa senza usare un riferimento
// int Incremento(double prezzo){
//     prezzo = prezzo + ((prezzo * 3) / 100);
//     return prezzo;
// }

int main(){

    system("clear");

    double prezzo = 0;

    cout << "PREZZO: ";
    cin >> prezzo;

    Incremento(prezzo);

    cout << "PREZZO INCREMENTATO: " << prezzo << endl;

return 0;
}
